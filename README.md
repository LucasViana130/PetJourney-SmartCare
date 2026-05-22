# 🐾 PetJourney SmartCare

## Sistema Inteligente de Monitoramento Veterinário com IoT
---

## 👥 Equipe

| Nome | RM |
|------|------|
| Lucas Viana | 563254 |
| Deryk de Souza | 563412 |
| Vinicius Paschoeto | 563089 |

---

# 📌 Sobre o Projeto

O **PetJourney SmartCare** foi desenvolvido como parte do **Challenge FIAP 2026**, em parceria com a **CLYVO**, com o objetivo de criar uma solução tecnológica voltada para a continuidade do cuidado veterinário através de IoT.

A proposta do projeto é transformar o monitoramento veterinário em um processo:

* contínuo;
* preventivo;
* inteligente;
* conectado em tempo real.

O sistema realiza a simulação do monitoramento de:

* temperatura corporal;
* frequência cardíaca (BPM);
* status do pet.

As informações são transmitidas em tempo real utilizando o protocolo **MQTT**, processadas pelo **Node-RED** e exibidas em um dashboard interativo.

---

# 🎯 Problema

Atualmente muitos pets recebem acompanhamento veterinário apenas em situações emergenciais ou quando os sintomas já estão agravados.

Isso gera problemas como:

* baixa prevenção;
* dificuldade no acompanhamento pós-operatório;
* falhas na continuidade do tratamento;
* identificação tardia de problemas de saúde;
* baixo engajamento entre clínicas e responsáveis.

O projeto busca resolver esse problema através de monitoramento contínuo utilizando IoT.

---

# 💡 Solução Proposta

O **PetJourney SmartCare** utiliza uma arquitetura IoT para monitorar sinais vitais de pets em tempo real.

A solução é composta por:

* ESP32;
* comunicação MQTT;
* Node-RED;
* dashboard em tempo real.

O sistema simula um ambiente veterinário inteligente capaz de auxiliar clínicas e responsáveis no acompanhamento preventivo da saúde animal.

---

# 🚀 Tecnologias Utilizadas

## IoT e Hardware

* ESP32
* Wokwi

## Comunicação

* MQTT
* HiveMQ Broker

## Processamento e Dashboard

* Node-RED
* Node-RED Dashboard

## Desenvolvimento

* Arduino IDE
* VSCode

---

# 🏗️ Arquitetura da Solução

## Fluxo da Aplicação

ESP32 → MQTT Broker (HiveMQ) → Node-RED → Dashboard

---

# 📡 Funcionamento da Arquitetura

### 1. ESP32

O ESP32 realiza a simulação dos sensores responsáveis pela coleta dos sinais vitais do pet.

### 2. MQTT

Os dados são enviados em tempo real através do protocolo MQTT.

### 3. Node-RED

O Node-RED realiza a assinatura dos tópicos MQTT, processa os dados recebidos e atualiza o dashboard.

### 4. Dashboard

O dashboard exibe os dados em tempo real para acompanhamento veterinário.

---

# 📡 Tópicos MQTT

| Tópico                 | Descrição             |
| ---------------------- | --------------------- |
| petjourney/temperature | Temperatura corporal  |
| petjourney/bpm         | Frequência cardíaca   |
| petjourney/status      | Status do dispositivo |

---

# 🧠 Justificativa do Uso de IoT

A utilização de IoT foi escolhida porque o projeto necessita de:

* monitoramento contínuo;
* comunicação em tempo real;
* coleta automática de dados;
* integração entre dispositivos;
* escalabilidade.

O protocolo MQTT foi utilizado por ser leve, rápido e amplamente utilizado em aplicações IoT.

---

# 🔥 Diferencial da Solução

O principal diferencial do projeto é transformar o acompanhamento veterinário de um modelo reativo para preventivo.

Ao invés de agir apenas em emergências, clínicas e responsáveis conseguem monitorar os sinais vitais continuamente e identificar alterações antes do agravamento da saúde do animal.

---

# 📊 Funcionalidades do Dashboard

O dashboard permite:

* visualização da temperatura corporal;
* monitoramento de BPM;
* acompanhamento do status do dispositivo;
* atualização em tempo real;

---

# 📂 Estrutura do Projeto

```bash id="yz5i0y"
petjourney-smartcare/
│
├── esp32_main.ino
├── flows.json
├── diagram.json
├── package.json
├── README.md
└── evidences/
```

---

# ⚙️ Como Executar o Projeto

## 1. Executar o ESP32 no Wokwi

Abra o simulador Wokwi e execute o projeto do ESP32.

O dispositivo irá:

* conectar ao Wi-Fi;
* conectar ao broker MQTT;
* enviar os dados continuamente.

---

## 2. Configurar o Node-RED

Importe o arquivo `flows.json` no Node-RED.

Após isso:

* execute os fluxos;
* conecte aos tópicos MQTT;
* inicie o dashboard.

---

## 3. Acessar o Dashboard

Após iniciar o Node-RED, acesse:

```bash id="txwd85"
http://localhost:1880/ui
```

---

# 📷 Demonstração

O projeto demonstra:

* simulação com ESP32;
* comunicação MQTT;
* processamento em tempo real;
* dashboard interativo;
* monitoramento veterinário preventivo.

---

# 📈 Possíveis Evoluções Futuras

O projeto pode evoluir para:

* sensores físicos reais;
* integração com IA;
* aplicativo mobile;
* armazenamento em nuvem;
* sistema de notificações;
* analytics veterinário;
* histórico completo do pet.

---

# 🎥 Vídeo Demonstrativo

Link do YouTube:

```bash id="1wxj2g"
ADICIONE O LINK DO VÍDEO AQUI
```
