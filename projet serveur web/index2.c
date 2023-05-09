#include <WiFi.h> 
    #include "DHT.h"
    #define DHTTYPE DHT22 // DHT 22 (AM2302), AM2321
    //DHT Sensor;
    uint8_t DHTPin = 14; 
    DHT dht(DHTPin, DHTTYPE); 
    float Temperature;
    float Humidity;
    const char* ssid = "nom du réseau à compléter"; 
    const char* password = "mdp à compléter";
    WiFiServer server(80);
    String header;
    void setup() 
    {
    Serial.begin(115200);
    pinMode(DHTPin, INPUT);
    dht.begin();
    Serial.print("Connecting to Wifi Network");
    Serial.println(ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    }
    Serial.println("");
    Serial.println("Connexion réussi au wifi");
    Serial.println("L'adresse IP ESP32 : ");
    Serial.println(WiFi.localIP());
    server.begin();
    Serial.println("Serveur démarré");
    }
    void loop()
    {
    Temperature = dht.readTemperature(); 
    Humidity = dht.readHumidity(); 
    WiFiClient client = server.available();
    if (client) 
    { 
    Serial.println("Web Client connecté ");
    String request = client.readStringUntil('\r'); 
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println("Connection: close");
    client.println();