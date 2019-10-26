## Scratch en Raspberry Pi

Raspbian es el sistema operativo recomendado por la fundación para Raspberry Pi (al estar optimizado para su hardware) y se basa en una distribución de GNU/Linux llamada Debian. En las últimas versiones de Raspbian podemos observar que aparece preinstalada la versión de Scratch 3.0, pero en caso de tener una versión anterior vamos a explicar cómo podemos instalarlo a través de la consola de comandos.

![](img/1.jpg "Scratch en Raspberry Pi")



<br />



## Scratch 2.0 en Raspbian

La versión 2.0 lleva algunos años disponible aunque Raspbian seguía incluyendo la versión anterior 1.4 hasta la llegada de la versión 3.0 de Scratch. El problema es que la versión 2.0 utilizaba Flash con la intención de ejecutarse en un navegador, lo que dejaba fuera a la Raspberry Pi al no tener un intérprete de Flash. Raspbian incorpora un plugin de Flash para que sea posible ejecutar Flash en el navegador aunque la versión disponible de Scratch no tiene conexión a internet y se ejecuta en modo offline.

La mayor ventaja de programar con Scratch en Raspberry Pi es la posibilidad de utilizar los pines GPIO y conectar el mundo digital con el mundo físico a través de salidas y entradas digitales.

![](img/2.jpg "Pines GPIO con Scratch 2.0")



<br />



## Scratch 3.0 en Raspbian

Scratch 3 ha lanzado su versión de escritorio para Raspbian en Raspberry Pi y este puede ser el empujón que te falta para empezar a programar.

Entre las mejoras de Scratch 3.0 sobre sus anteriores versiones hay que destacar el salto de Flash a HTML5, haciéndolo compatible con muchos dispositivos más. También encontramos una renovación de la interfaz con bloques mayores y más fáciles de leer, y trasladando el resultado del programa a la parte derecha de la pantalla. Además, disponemos de nuevos editores de sonido y sprites y nuevos bloques para integrar.

![](img/3.jpg "Scratch 3.0 en Raspbian")



<br />



## Instalar Scratch 3.0 en Raspbian

Para instalar esta versión de Scratch solo tenemos que actualizar los repositorios de Raspbian e instalar el paquete de Scratch. Para ello podemos acceder a través de programas recomendados de Raspbian para instalarlo.

![](img/4.jpg "Agregar Scratch 3.0 en Raspbian")

O por otro lado, podemos instalarlo mediante la siguiente instrucción en la línea de comandos.

```sh
pi@raspberrypi: ~ $ sudo apt update
pi@raspberrypi: ~ $ sudo apt install scratch3
```

Una vez instalado ya podemos empezar a programar con Scratch 3.0 sobre Raspberry Pi y utilizar los pines GPIO para conectar el mundo digital con el mundo físico.

![](img/5.jpg "Pines GPIO con Scratch 3.0")
