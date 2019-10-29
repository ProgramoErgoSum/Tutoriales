## Introducción

En este tutorial vamos a explicar cómo utilizar los botones de micro:bit para interactuar con ellos y construir diferentes programas utilizando el lenguaje de programación MicroPython.

### Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian
- Micro:Bit



<br />



## Botones en Micro:bit

La placa Micro:bit consta de 2 botones en la parte frontal situados a la izquierda y a la derecha bajo las serigrafías `A` y `B` respectivamente.

> Puedes acceder a la referencia de los [botones](https://microbit-micropython.readthedocs.io/en/latest/tutorials/buttons.html) desde la documentación oficial de Micro:bit.



<br />



## Función is_pressed()

La primera función que vamos a ver es `is_pressed()` encargada de comprobar si hemos pulsado un botón. Sin embargo, a esta función tiene que añadirse el botón en concreto que estamos pulsando `button_a` o `button_b`. De tal manera que el código encargado de comprobar si estamos pulsando el botón A será `button_a.is_pressed()`.

En el siguiente ejemplo vamos a mostrar imágenes en la matriz de LEDs. Una cara feliz `Image.Happy` si estamos pulsando el botón y en caso contrario una cara triste `Image.SAD`.

```python
from microbit import *

while True:
   if button_a.is_pressed():
      display.show(Image.HAPPY)
   else:
      display.show(Image.SAD)
```



<br />



## Función get_presses()

Con esta función podemos capturar las veces que hemos pulsado un determinado botón. El valor devuelto por la función es un número, con lo cual, si queremos mostrarlo por la matriz de LEDs debemos transformarlo a cadena (string) utilizando la función `str()`.

Por ejmplo, vamos a mostrar por la matriz de led las veces que hemos pulsado el botón A. Para ello, tenemos que esperar 5 segundos utilizando la función `sleep()` hasta que se muestre el número en la matriz de LEDs.

```python
from microbit import *

sleep(5000) # 5000 milisegundos = 5 segundos

pulsaciones = str(button_a.get_presses())

display.show(pulsaciones)

# En caso de más de 1 dígito utilizar la función display.scroll()
display.scroll(pulsaciones)
```



<br />



## Ejercicios propuestos

1.- Muestra la imagen de un corazón cada vez que pulses el botón A.

2.- Muestra la palabra 'IZQUIERDA' se pulsa el botón A o 'DERECHA' si se pulsa el botón B.

3.- Enciende todos los LEDs si pulsas ambos botones A y B al mismo tiempo durante 5 segundos.
