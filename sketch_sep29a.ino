#include<ESP8266WiFi.h>


const char* ssid="WiFi name";
const char* password ="Password";
const int led=4;
WiFiServer server(80);
void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(D7,OUTPUT);
  pinMode(D6,OUTPUT);
  Serial.begin(115200);
  Serial.print("connecting to: ");
  Serial.println(ssid);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,password);
  while(WiFi.status()!= WL_CONNECTED)
  {
    delay(500);
    Serial.print("..");
    Serial.println("Nodemcu(ESP8266) is connected to the ssid");
    Serial.println(WiFi.localIP());
    server.begin();
    delay(1000);



  }
}

void loop() {
  // put your main code here, to run repeatedly:
  WiFiClient client;
  client = server.available();

  if(client ==1)
  {
    digitalWrite(D5,LOW);
    String request=client.readStringUntil('\n');
    client.flush();
    Serial.println(request);

    if(request.indexOf("turn_on")!=-1)
    {
    if(request.indexOf("relay1") !=-1)
    {
      digitalWrite(4,HIGH);
      Serial.println("LED is on");
    }
    else if(request.indexOf("relay2") !=-1)
    {
      digitalWrite(5,HIGH);
      Serial.println("LED is off");
    }
    else if(request.indexOf("relay3")!=-1)
    {
      digitalWrite(D7,HIGH);
    }
    else if(request.indexOf("relay4")!=-1)
    {
      digitalWrite(D6,HIGH);
    }
    }
    else
    {
      if(request.indexOf("relay1")!=-1)
      digitalWrite(4,LOW);
      else if(request.indexOf("relay2")!=-1)
      digitalWrite(5,LOW);
      else if(request.indexOf("relay3")!=-1)
      digitalWrite(D7,LOW);
      else if(request.indexOf("relay4")!=-1)
      digitalWrite(D6,LOW);

    }
    Serial.print("Client Disconnected");
    Serial.println("===============================================");
    Serial.println("                                          ");

  }

}
