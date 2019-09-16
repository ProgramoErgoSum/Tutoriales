## Introducción

En este tutorial vamos a explicar cómo instalar el sistema operativo Raspbian en Raspberry Pi utilizando el asistente guiado NOOBs.

### Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi
- PC con conexión a Internet
- Lector de tarjetas SD



<br />



## Raspbian NOOBs

Raspbian es el sistema operativo recomendado para Raspberry Pi (al estar optimizado para su hardware) y se basa en una distribución de GNU/Linux llamada Debian.

NOOBS es el acrónimo de *New Out Of Box Software* y consiste en un instalador sencillo guiado paso a paso. NOOBS incluye también un método de edición rápida de configuración del nuevo sistema, un navegador web preinstalado y un modo de recuperación por línea de comandos a partir de una partición de rescate que se crea automáticamente.



<br />



## Descargar Raspbian con NOOBs

Para descargar la imagen del sistema operativo Raspbian accederemos al apartado de <a target="_blank" href="https://www.raspberrypi.org/downloads/noobs/">descargas</a> desde la web oficial de Raspberry Pi y elegimos la versión que queremos instalar. El tiempo de descarga suele ser de 10 minutos aproximadamente dependiendo de la conexión a internet.

- `NOOBS`: Versión completa con entorno gráfico y programas recomendados.
- `NOOBS Lite`: Versión reducida sin entorno gráfico (modo consola) para *usuarios experimentados*.

El archivo descargado vendrá con extensión `.zip` con lo cual deberemos tener instalado un compresor de archivos.



<br />



## Instalar SD Card Formatter

El sistema operativo se instalará sobre una tarjeta SD que tenemos que formatear para eliminar el posible contenido así como para dejarla preparada con el sistema de archivos que utiliza Raspbian. Por ello, mientras se descarga la imagen de Raspbian, vamos a descargar el programa <a target="_blank" href="https://www.sdcard.org/downloads/index.html">SD Card Formatter</a> (recomendado por Raspberry Pi).

Una vez descargado e instalado, insertamos la tarjeta SD en la ranura de nuestro lector de tarjetas, la seleccionamos y la formateamos. Este proceso tarda apenas unos segundos.

![](img/sdcard-formatter.png)



<br />



## Instalar Raspbian con NOOBs

Una vez descargada la imagen de Raspbian, la descomprimimos con un compresor de archivos `.zip` y copiamos todos los archivos de la carpeta descomprimida en el interior de la tarjeta SD formateada en el paso anterior.

![](img/copiar.png)

Una vez copiados todos los archivos, conectaremos nuestra Raspberry Pi e iremos seleccionando las opciones que nos ofrezca el asistente de instalación. Este proceso **suele tardar unos 20 minutos** aproximadamente.

![](img/noobs.gif)

Una vez finalizada la instalación arrancará el sistema operativo Raspbian como se muestra en la siguiente imagen.

![](img/raspbian.png)



<br />



## Ejercicios propuestos

1.- Instala el sistema operativo Raspbian con NOOBs.
