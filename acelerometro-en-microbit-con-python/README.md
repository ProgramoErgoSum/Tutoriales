# Acelerómetro en Microbit con Python

En este tutorial vamos a explicar cómo **utilizar el acelerómetro de micro:bit** para realizar diferentes tipos de movimientos.

### Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian
- Micro:Bit



<br />



## Acelerómetro en Micro:bit

Micro:bit dispone de un acelerómetro de 3 ejes:

- X: Inclinación de izquierda a derecha.
- Y: Inclinación hacia adelante y hacia atrás.
- Z: Movimiento arriba y abajo.

> Puedes acceder a la referencia del [acelerómetro](https://microbit-micropython.readthedocs.io/en/latest/tutorials/movement.html) desde la documentación oficial de Micro:bit.

### Función get_x()

La primera función que vamos a ver es `get_x()` encargada de medir la inclinación sobre el eje x. El valor devuelto por la función oscila entre -20 y 20, siendo 0 su posición en nivel.

En el siguiente ejemplo comprobamos la inclinación sobre el eje x mostrando su valor en la matriz de led.

```python
from microbit import *

while True:
   value = accelerometer.get_x()
   if value == 0:
      display.show("0")
   elif value < -20:
      display.show("I")
   else:
      display.show("D")
```

### Función get_y()

La segunda función que vamos a ver es `get_y()` encargada de medir la inclinación sobre el eje y. El valor devuelto por la función oscila entre -20 y 20, siendo 0 su posición en nivel.

En el siguiente ejemplo comprobamos la inclinación sobre el eje y mostrando su valor en la matriz de led.

```python
from microbit import *

while True:
   value = accelerometer.get_y()
   if value == 0:
      display.show("0")
   elif value < -20:
      display.show("T")
   else:
      display.show("B")
```

### Función get_z()

La tercera función que vamos a ver es `get_z()` encargada de medir la aceleración sobre el eje z.

```python
from microbit import *

while True:
   value = accelerometer.get_z()
   if value == 0:
      display.show("0")
   elif value < -20:
      display.show("T")
   else:
      display.show("B")
```



<br />



# Ejercicios propuestos

1.- Muestra diferentes imágenes según los movimientos de la placa. 
