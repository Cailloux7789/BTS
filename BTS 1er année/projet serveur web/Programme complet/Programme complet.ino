#include <WiFi.h>

const char* ssid = "snec";      // Entrez le nom du réseau Wi-Fi
const char* password = "btssnjeanperrin";  // Entrez le mot de passe du réseau Wi-Fi

WiFiServer server(80);

String header;
String output26State = "off";
String output27State = "off";
const int output26 = 26;
const int output27 = 27;

void setup() {
  Serial.begin(115200);
  pinMode(output26, OUTPUT);
  pinMode(output27, OUTPUT);
  digitalWrite(output26, HIGH);
  digitalWrite(output27, HIGH);

  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
}

void loop() {
  WiFiClient client = server.available();  // Listen for incoming clients
  if (client) {                            // If a new client connects,
    Serial.println("New Client.");         // print a message out in the serial port
      String currentLine = "";               // make a String to hold incoming data from the client
    while (client.connected()) {           // loop while the client's connected
      if (client.available()) {            // if there's bytes to read from the client,
        char c = client.read();            // read a byte, then
        Serial.write(c);                   // print it out the serial monitor
        header += c;
        if (c == '\n') {
          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();
          }
          break;
            // turns the GPIOs on and off
            if (header.indexOf("GET /26/on") >= 0) {
              Serial.println("GPIO 26 on");
              output26State = "on";
              digitalWrite(output26, HIGH);
            }
            else if (header.indexOf("GET /26/off") >= 0) {
              Serial.println("GPIO 26 off");
              output26State = "off";
              digitalWrite(output26, LOW);
            }
            else if (header.indexOf("GET /27/on") >= 0) {
              Serial.println("GPIO 27 on");
              output27State = "on";
              digitalWrite(output27, HIGH);
            }
            else if (header.indexOf("GET /27/off") >= 0) {
              Serial.println("GPIO 27 off");
              output27State = "off";
              digitalWrite(output27, LOW);
            }
          
        }
      }
    }
  

  client.println("<!DOCTYPE html><html>");
  client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
  client.println("<link rel=\"icon\" href=\"data:,\">");
  client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
  client.println(".button { background-color: #195B6A; border: none; color: white; padding: 16px 40px;}");
  client.println(".button2 {background-color: #77878A;}</style></head>");
  client.println("<body><h1>ESP32 Web Server</h1>");
  client.println("<p>GPIO 26 - State " + output26State + "</p>");
  if (output26State == "off") {
    client.println("<p><a href=\"/26/on\"><button class=\"button\">ON</button></a></p>");
  } else {
    client.println("<p><a href=\"/26/off\"><button class=\"button button2\">OFF</button></a></p>");
  }
  client.println("<p>GPIO 27 - State " + output27State + "</p>");
  if (output27State == "off") {
    client.println("<p><a href=\"/27/on\"><button class=\"button\">ON</button></a></p>");
  } else {
    client.println("<p><a href=\"/27/off\"><button class=\"button button2\">OFF</button></a></p>");
  }
  client.println("</body></html>");

  output26State = digitalRead(output26) == HIGH ? "on" : "off";
  output27State = digitalRead(output27) == HIGH ? "on" : "off";
  client.stop();
  }
}