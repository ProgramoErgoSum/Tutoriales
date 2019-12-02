## Introducción

En este curso aprenderás a programar el videojuego de Arkanoid en su versión para Arduino. De esta forma la nave se desplazará con ayuda de un potenciómetro y cada vez que se toque un bloque del escenario se apagará y encenderá el color del LED correspondiente al bloque tocado.

![](img/preview.gif)



<br />



## Materiales

En esta práctica vamos a programar un videojuego donde aparecerán diferentes objetos de colores a lo largo y ancho del escenario. En caso de tocar uno de los objetos, deberá encenderse un LED de la placa de Arduino acorde con el color que se está tocando, es decir, si tocamos un objeto de color verde, se deberá encender un LED de color verde, y así con todos los objetos del videojuego.

- Arduino UNO
- Protoboard
- Latiguillos
- LEDs
- Resistencias
- Potenciómetro



<br />



## Esquema eléctrico

Los Diodos LED que estamos utilizando para la práctica admiten una tensión máxima de 2,1V y para evitar que se puedan dañar tendremos que colocarle una resistencia al circuito. Para ello, vamos a calcular el valor de la resistencia siguiendo la Ley de Ohm, es decir, la tensión en el Led tiene que ser 2,1V.

Si el pin de Arduino ofrece 5V, el tensión que debe circular por la resistencia es 5V – 2,1V = 2,9V. Por otro lado, sabemos que la intensidad que circula por el Led es de 20mA. Con lo cual siguiendo la Ley de Ohm, tenemos que:

```
R = 2,9V / 0,02A = 145Ω
```

Redondeamos el resultado obtenido a un valor de resistencia por encima de su resistencia ideal, obteniendo una resistencia de 220Ω.

> Mirando en la tabla de resistencias, la resistencia de 220Ω corresponde al color rojo-rojo-marrón.

![](img/esquema-electrico.jpg)



<br />



## Programación en mBlock

<div class="iframe">
  <iframe src="//www.youtube.com/embed/WDDzEz__nMY" allowfullscreen></iframe>
</div>

Lo primero que tenemos que hacer es crear un proyecto nuevo en mBlock y configurarlo con las extensiones y placa de Arduino correspondiente como se explica en el curso de introducción a Arduino y configuración de mBlock.

Una vez configurado programaremos son diferentes objetos de pelota y la nave como se explcia en el vídeo. Además, como lo que queremos es encender un LED de la placa de Arduino, la programación es muy sencilla, ya que solamente deberemos comprobar si el objeto está tocando la pelota para activar la salida digital de arduino, o desactivarla en caso contrario.

![](img/programacion-mblock.jpg)

Una vez programado el objeto principal, recuerda que puedes duplicar el mismo objeto para crear cuantos objetos como LEDs quieras encender. Lo único que tendrás que cambiar será el número del pin de Arduino que quieres encender.



<br />



## Retos propuestos

Si ya has completado todas las lecciones del tutorial te proponemos resolver los siguientes retos.

### Reto 1: Añade una variable de tiempo

En este reto te propongo que añadas una variable al videojuego para mostrar el tiempo máximo de permanencia tocando los colores. En caso de no estar tocando ningún color el cronómetro deberá empezar de cero nuevamente.

![](img/reto-1.jpg "Añade una variable de tiempo")
