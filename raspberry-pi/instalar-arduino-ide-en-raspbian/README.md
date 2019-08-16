En este tutorial vamos a explicar cómo **instalar Arduino IDE** en Raspberry Pi con Raspbian.

# Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian
- Arduino UNO

# Arduino IDE

Arduino IDE es un entorno de desarrollo y en él se realiza la programación de cada una de las placas de Arduino o similares. Por defecto no viene instalada en Raspbian aunque puede instalarse de una forma muy sencilla.

## Instalar Arduino IDE

Antes de instalar un programa es recomendable actualizar Raspbian como se explica en el tutorial [Raspberry Pi - Raspbian - Update](raspberry_pi-raspbian-update). Una vez actualizada la lista de paquetes del repositorio podemos instalar el *IDE* y el *CORE* desde la terminal mediante el comando `apt install arduino arduino-core`. El proceso suele tardar unos minutos.

```sh
pi@raspberrypi:~ $ sudo apt install arduino arduino-core
```

Una vez finalizado el proceso de instalación ya podemos acceder al IDE de Arduino desde el menú `Programming > Arduino IDE` como se muestra en la siguiente imagen.

![](img/arduino-ide.png)

## ¡Hola Mundo!

Una vez instalado el IDE de Arduino vamos a probar el funcionamiento cargando el programa Blink que viene en la instalación desde `File > Examples > 01. Basic > Blink`. 

Seleccionamos la tarjeta `Tools > Board > xxx` y puerto `Tools > Serial Port > xxx` al cual hemos conectado nuestra placa de Arduino, y subimos el programa haciendo clic en el icono subir `->`. Como resultado, deberá encenderse y apagarse el LED situado en el pin digital 13 de nuestra placa de arduino.

> En nuestro caso hemos seleccionado una placa de Arduino UNO en el puerto `/dev/ttyACM0`.

![](img/hola-mundo.png)

# Resumen

Arduino es ideal para todo tipo de proyectos de electrónica. Con sus conectores se puede conectar directamente a componentes y sensores, siendo más rápida a la hora de realizar cambios o proyectos sencillos que no requieran tareas complejas. Además, nada más enchufarla, empezará a ejecutar la tarea para la que ha sido programada.

# Ejercicios propuestos

1.- Carga el programa Blink y comprueba que el LED situado en el pin 13 se enciende y se apaga correctamente.
