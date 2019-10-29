## Sensor sigue-líneas del robot mBot con mBlock

En este curso aprenderás a programar el robot mBot de MakeBlock y utilizar el sensor de infrarrojos (IR) o sigue-líneas. Para ello se programará sobre el lenguaje de programación por bloques de Scratch la simulación del algoritmo y a continuación se programará sobre mBlock el código que se le pasará al robot mBot.

![](img/preview.gif)



<br />



## ¿Qué es un sensor de infrarrojos (IR) o sigue-líneas?

El sigue-líneas o sensor de infrarrojos (IR) es un sensor de medición de distancia que se basa en un sistema de emisión y recepción de radiación lumínica en el espectro de los infrarrojos. Dicho de otro modo, es un sensor con una fuente de luz (diodo emisor) y detector (fototransistor) integrados en un mismo encapsulado. La detección del objeto se consigue por la reflexión (o no) del haz infrarrojo sobre la superficie del objeto. Este sensor se utiliza habitualmente para detectar el color de un objeto, en nuestro caso, distinguir blanco y negro en aplicaciones para el seguimiento de línea.

![](img/sigue-lineas.jpg)

El funcionamiento del sensor es el siguiente; si el sensor del robot mBot está sobre la línea negra, los reflejos del sensor son absorbidos por la misma con lo cual el receptor del sensor no recibe ningún valor, o lo que es lo mismo, dando el valor 0. Del mismo modo, si uno de los dos sensores del robot queda fuera de la línea, se producirá el reflejo indicando los valores 1 o 2 respectivamente. Por último, si ambos sensores quedan fuera de la línea se mostrará el valor 3.

![](img/sensor-ir.jpg)

- Valor 0: mBot tiene los dos detectores IR sobre la línea.
- Valor 1: mBot tiene el detector IR de la derecha fuera de la línea.
- Valor 2: mBot tiene el detector IR de la izquierda fuera de la línea.
- Valor 3: mBot tiene ambos detectores IR fuera de la línea.



<br />



## Sigue-líneas sobre Scratch

<div class="iframe">
  <iframe src="//www.youtube.com/embed/6RPOuI9MhvE" allowfullscreen></iframe>
</div>

En esta lección se simula sobre Scratch el funcionamiento de un sigue-líneas (antes de programarlo sobre el propio robot). De esta forma entenderemos el concepto y funcionamiento del sensor sigue-líneas.

Antes de programar el objeto que se moverá sobre la línea negra, le añadimos sobre el disfraz los sensores de IR (de forma simulada). En este caso los diferenciamos con 2 colores sólidos que no utilicemos en el circuito, rojo para el sensor izquierdo y verde para el sensor derecho.

En cuanto a la programación simplemente debemos indicarle que dado el cambio de color (simulando que sale del circuito) el objeto deberá girar hacia un lado u otro. Además, en caso de que ambos sensores estén dentro del circuito, nuestro objeto avanzará sobre el circuito.

![](img/con-scratch.jpg)



<br />



## Sigue-líneas sobre mBlock

<div class="iframe">
  <iframe src="//www.youtube.com/embed/NBkQY4pj7mA" allowfullscreen></iframe>
</div>

En esta lección se programa sobre mBlock el funcionamiento de nuestro sigue-líneas. Como puedes observar en el vídeo el funcionamiento del sensor es muy parecido al programado con Scratch en la lección anterior. La diferencia es que en este caso tenemos que tener en cuenta los valores que devuelve el sensor IR, como se explicaba en la primera lección del curso.

![](img/sensor-ir.jpg)

- Valor 0: mBot tiene los dos detectores IR sobre la línea.
- Valor 1: mBot tiene el detector IR de la derecha fuera de la línea.
- Valor 2: mBot tiene el detector IR de la izquierda fuera de la línea.
- Valor 3: mBot tiene ambos detectores IR fuera de la línea.

Es muy importante conocer las conexiones donde hemos conectado nuestro robot para que no realice movimientos inesperados. En nuestro caso hemos seguido las conexiones que vienen por defecto en el manual de construcción del robot.

![](img/con-mblock.jpg)



<br />



## Resultado de nuestro robot sobre la línea

En este último video puedes observar como siguiendo la plantilla que viene en el kit de mBot nuestro robot sigue la línea sin salirse en ningún momento.

<div class="iframe">
  <iframe src="//www.youtube.com/embed/hI4YWv3ZrhM" allowfullscreen></iframe>
</div>



<br />



## Retos propuestos

Si ya has completado todas las lecciones del tutorial te proponemos resolver los siguientes retos.

### Reto 1: Aumentando la velocidad

En este reto te proponemos que realices los cambios que creas necesarios para que el Robot siga la línea a una mayor velocidad que la propuesta en el tutorial. Para ello recuerda que tras cada cambio que realices en el robot deberás cargar el código.

![](img/reto-1.jpg)



<br />



## Materiales

- Sigue-líneas sobre Scratch `Scratch.sb2`
- Sigue-líneas sobre mBlock `mBlock.sb2`
- Reto 1: Aumentando la velocidad `Reto-1.sb2`
