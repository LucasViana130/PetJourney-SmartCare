#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void reconnect() {
  while (!client.connected()) {

    String clientId = "PetJourney-";
    clientId += String(random(0xffff), HEX);

    if (client.connect(clientId.c_str())) {

      client.publish("petjourney/status", "ESP32 conectado");

    } else {

      delay(5000);
    }
  }
}

void setup() {

  Serial.begin(115200);

  setup_wifi();

  client.setServer(mqtt_server, 1883);

  randomSeed(analogRead(0));
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  float temperatura = random(36, 41);
  int bpm = random(60, 160);

  char tempString[8];
  dtostrf(temperatura, 1, 2, tempString);

  char bpmString[8];
  sprintf(bpmString, "%d", bpm);

  client.publish("petjourney/temperatura", tempString);
  client.publish("petjourney/bpm", bpmString);

  Serial.println("========================");

  Serial.print("Temperatura corporal: ");
  Serial.println(tempString);

  Serial.print("Batimentos cardiacos: ");
  Serial.println(bpmString);

  delay(5000);
}