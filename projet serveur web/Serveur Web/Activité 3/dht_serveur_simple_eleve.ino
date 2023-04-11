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
client.println("<!DOCTYPE html><html>"); 
client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
client.println("<link rel=\"icon\" href=\"data:,\">");
client.println("</head><body bgcolor ='aqua'><center><h1>Serveur web ESP32 Lecture humidit&eacute et temp&eacuterature </h1>");
client.println("<h2>DHT11/DHT22</h2>");
client.println("<h2>Lyc&eacutee Jean-Perrin</h2>");
client.println("");
client.println("<h2>BTS SNEC</h2>");
client.println("<table><tr><th>MESURE</th><th>VALEUR</th></tr>");
client.println("<tr><td>Temp. Celsius</td><td><span class=\"sensor\">");
client.println(dht.readTemperature());
client.println(" *C</span></td></tr>"); 
client.println("<tr><td>Temp. Fahrenheit</td><td><span class=\"sensor\">");
client.println(1.8 * dht.readTemperature() + 32);
client.println(" *F</span></td></tr>"); 
client.println("<tr><td>Humidit&eacute</td><td><span class=\"sensor\">");
client.println(dht.readHumidity());
client.println(" %</span></td></tr>"); 
client.println("</center></body></html>"); 

}

client.stop();

}
