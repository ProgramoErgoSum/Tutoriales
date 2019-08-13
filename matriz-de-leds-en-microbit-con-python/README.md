# Matriz de LEDs en Microbit con Python

En este tutorial vamos a explicar cómo **utilizar la matriz de LEDs de micro:bit** para representar y construir diferentes tipos de imágenes utilizando el lenguaje de programación MicroPython.

### Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian
- Micro:Bit



<br />



## Imágenes en micro:bit

MicroPython viene con muchas imágenes integradas para mostrar en la pantalla aunque probablemente queramos construir las nuestras propias.

> Puedes ver todas las [imágenes predefinidas](https://microbit-micropython.readthedocs.io/en/latest/tutorials/images.html) desde la documentación oficial de Micro:bit.

Como en todos los programas, en primer lugar tenemos que importar la librería microbit mediante la instrucción `from microbit import *`. Esta instrucción nos permite utilizar todas las funciones para programar la placa Micro:bit. La siguiente instrucción será la función que `display.show()` que muestra por pantalla lo que aparezca dentro de los paréntesis. En este caso, como queremos mostrar una imagen predefinida, añadimos el objeto imagen seguido del tipo o atributo de imagen que queremos añadir:

- Image.HEART
- Image.HEART_SMALL
- Image.HAPPY
- Image.SMILE
- etc.

```python
from microbit import *

display.show(Image.HEART)
```

El resultado de este código debe ser el que se muestra un corazón en la matriz de LEDs de nuestra placa Micro:bit.

### Crear imágenes propias

En algunas ocasiones puede que nos interese construir nuestras propias imágenes. Esto es posible ya que podemos representar sobre la matriz de LEDs cualquier imagen que se nos ocurra. Además de encender o apagar cada LED, podemos establecer una intensidad de luz de 0 (mínima luz) a 9 (máxima luz).

Para ello utilizaremos la función `Imagen()` la cual contiene 25 números (correspondientes a los 25 LEDs) agrupados de 5 en 5 y separados por el carácter `:` cada grupo. Los LEDs están numerados desde la esquina superior izquierda hasta la inferior derecha. Con lo cual, cada grupo hace referencia a una fila desde arriba hacia abajo.

```python
# 1 1 1 1 1
# 2 2 2 2 2
# 3 3 3 3 3
# 4 4 4 4 4
# 5 5 5 5 5

Image("11111:22222:33333:44444:55555")
```

Por ejemplo, vamos a crear una imagen con forma de barco utilizando diferentes intensidades de luz. Para ello, vamos a crear una variable llamada `barco` la cual representará la imagen creada. Por último, mostramos la imagen de forma similar al ejemplo anterior.

```python
from microbit import *

# 0 1 0 1 0
# 0 3 0 3 0
# 0 5 0 5 0
# 9 9 9 9 9
# 0 9 9 9 0

barco = Image("01010:03030:05050:99999:09990")

display.show(barco)
```



<br />



## Ejercicios propuestos

1.- Muestra diferentes imágenes predefinidas en bucle.

2.- Crea las letras de tu nombre en mayúsculas y muéstralas en bucle de 1 en 1.

3.- Construye un degradado de izquierda a derecha utilizando diferentes intensidades de luz.
