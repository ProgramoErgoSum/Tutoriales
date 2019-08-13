# Servidor Web con ESP8266

En este tutorial vamos a crear un **servidor web para controlar los pines GPIO** de nuestra placa NodeMCU ESP8266 y encender o apagar un LED desde el móvil conectado a la WiFi.

### Antes de empezar

Para este tutorial vas a necesitar los siguientes componentes:

- NodeMCU o equivalente
- Arduino IDE con placa NodeMCU ESP12



<br />



## Conectando a la WiFi

En primer lugar debemos ser capaces de conectar nuestra placa ESP8266 a la WiFi como se explica en tutoriales anteriores. En este tutorial además asignaremos una dirección IP fija a nuestra placa para que siempre tenga la misma aunque se desconecte de la WiFi. Por último accederemos desde el móvil para controlar diferentes pines GPIO.

### IP Fija en ESP8266

De forma similar que cuando nos conectábamos a una red WiFi, nuestro router nos asigna de forma automática una dirección IP. Sin embargo, podemos asignar una IP fuera del rango que ofrece el router para controlar nuestra placa con una IP Fija.

En este caso, vamos a conectar nuestra ESP8266 a la IP *192.168.0.200* en la cual nos hemos asegurado que está disponible y fuera de la asignación automática por nuestro router.

![](img/ipfija.png)

Lo que tenemos que añadir a nuestro código, es la asignación de dicha dirección IP, Puerta de Enalce (dirección IP del Router) y Máscara de Red.

En la función `setup()`, además de establecer la conexión en modo cliente añadimos la configuración de los parámetros para que asigne los establecidos por nosotros.

En la función `loop()` mostramos la IP que hemos asignado para comprobar que todo ha funcionado correctamente.

```arduino
#include <ESP8266WiFi.h>

const char* ssid     = "******";
const char* password = "******";

// Establecer IP, Puerta de Enlace y Máscara
IPAddress ip(192,168,0,200);
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);

void setup() {
  Serial.begin(115200);

  // Conectar a la WiFi
  WiFi.begin(ssid, password);

  // Modo cliente
  WiFi.mode(WIFI_STA);
  WiFi.config(ip, gateway, subnet);

  // Esperar hasta conectar
  while (WiFi.status() != WL_CONNECTED)
    delay(200);
}

void loop(){
  // Comprobar si estamos conectados
  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("Conectado a ");
    Serial.println(WiFi.localIP());
  }
  
  delay(5000);
}
```

### Servidor Web en ESP8266

Una vez tenemos fija la dirección IP, vamos a añadir la funcionalidad para comunicarnos con la placa ESP8266 a través de un navegador conectado a la misma red.

En primer lugar vamos a mostrar un código HTML con el mensaje *Hola Mundo*.

![](img/hola-mundo.png)

En primer lugar necesitamos añadir la librería `ESP8266WebServer.h` encargada de controlar el servidor web. Además, le indicamos que el puerto por el cual se va a escuchar es el puerto 80.

En la función `setup()` le indicamos que tras la petición "/" o raiz, llamaremos a la función `handleRoot()` encargada de mostrar el mensaje 'Hola Mundo'.

En la función `loop()` solamente hemos añadido la escucha de clientes en caso de estar conectados a la WiFi.

```arduino
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h> 

const char* ssid     = "******";
const char* password = "******";

// Establecer IP, Puerta de Enlace y Máscara
IPAddress ip(192,168,0,200);
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);

// Puerto del servidor web
ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);

  // Conectar a la WiFi
  WiFi.begin(ssid, password);

  // Modo cliente
  WiFi.mode(WIFI_STA);
  WiFi.config(ip, gateway, subnet);

  // Esperar hasta conectar
  while (WiFi.status() != WL_CONNECTED)
    delay(200);

  // Arrancar el servidor
  server.on("/", handleRoot);
  server.begin();
}

void loop(){
  // Comprobar si estamos conectados
  if (WiFi.status() == WL_CONNECTED) {
    server.handleClient();
  }
  
}

void handleRoot() {
  server.send(200, "text/plain", "Hola Mundo");
}
```

### Pines GPIO mediante webservice

Sabiendo que podemos acceder a la raiz del servidor web, podemos imaginar que podríamos acceder a diferentes direcciones, como `/led-1/encender` o `/led-1/apagar`.

![](img/leds.png)

En este caso hemos creado 2 endpoints o urls más `/14/on` y `/14/off` y cada una de ellas está asignada a una función `encender()` y `apagar()` respectivamente. En ambas funciones hemos añadido el pin GPIO 14 con la función de encender o apagar dicho pin.

> Recuerda mirar la equivalencia de pines GPIO en tu placa NodeMCU como se explica en el anterior tutorial.

```arduino
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h> 

const char* ssid     = "******";
const char* password = "******";

// Establecer IP, Puerta de Enlace y Máscara
IPAddress ip(192,168,0,200);
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);

// Puerto del servidor web
ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);

  // Conectar a la WiFi
  WiFi.begin(ssid, password);

  // Modo cliente
  WiFi.mode(WIFI_STA);
  WiFi.config(ip, gateway, subnet);

  // Esperar hasta conectar
  while (WiFi.status() != WL_CONNECTED)
    delay(200);

  // Arrancar el servidor
  server.on("/", handleRoot);
  server.on("/14/on", encender);
  server.on("/14/off", apagar);
  server.begin();

  // Led
  pinMode(14, OUTPUT);
}

void loop(){
  // Comprobar si estamos conectados
  if (WiFi.status() == WL_CONNECTED) {
    server.handleClient();
  }
  
}

void handleRoot() {
  server.send(200, "text/plain", "Hola Mundo");
}

void encender() {
  server.send(200, "text/plain", "Encender");
  digitalWrite(14, HIGH);
}

void apagar() {
  server.send(200, "text/plain", "Apagar");
  digitalWrite(14, LOW);
}
```

![](img/html-href.gif)



<br />



## Ejercicios propuestos

1.- Añade un semáforo para controlarlo desde la web en otro PC o movil de la misma red.

2.- Añade un código en html para mostrar un botón de on y otro de off.

3.- Añade más componentes de electrónica, como servomotores, etc.
