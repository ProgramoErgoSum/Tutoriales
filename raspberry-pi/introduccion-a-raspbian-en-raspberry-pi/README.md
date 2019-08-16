En este tutorial vamos a explicar cómo **configurar el sistema operativo Raspbian** para utilizarlo por primera vez y ver todas sus características y programas.

# Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian

# Primeros pasos

En el primer arranque de la Raspberry Pi te aparecerá una ventana dándote la bienvenida a Raspberry Pi. Siguiendo el asistente podrás configurar el sistema operativo Raspbian de forma inicial.

## Fuentes de alimentación

En muchas ocasiones se suele adquirir la fuente de alimentación de la Raspberry Pi por separado. En este caso tienes que tener en cuenta que la especificación eléctrica adecuada para una Raspberry Pi es de 5V.

Además, la cantidad de corriente que la fuente de alimentación debe ser capaz de proporcionar depende del modelo y de la cantidad de periféricos conectados a la misma. Como mínimo necesitará 700mA, pero si utilizas teclado y ratón necesitarás una fuente de alimentación de 1.5A o incluso 2A que es lo que recomienda la fundación Raspberry Pi.

## Conectar Raspberry Pi al monitor

Probablemente no dispongas de un monitor con HDMI al cual quieres conectar la Raspberry Pi. En este caso, una opción económica pasa por adquirir por separado un conversor de VGA-HDMI.
 
## Conectar teclado y ratón

Lo ideal sería conectar el teclado y ratón mediante USB aunque también podríamos conectarlos mediante bluetooth para minimizar el uso de puertos. En este último caso debemos instalar los drivers en el sistema operativo si todavía no ha sido instalado.

## Encender y apagar la Raspberry Pi

Por defecto, nuestra Raspberry Pi no dispone de botón de encendido y apagado. Por ello, debemos seguir una serie de pasos para encenderla y apagarla de forma correcta.

**Encender Raspberry Pi**

- Introduce la tarjeta micro SD con el sistema operativo debidamente instalado.
- Conecta los periféricos (teclado, ratón, monitor, etc.).
- Conecta la fuente de alimentación y espera a que inicie el sistema operativo.

**Apagar Raspberry Pi**

En modo gráfico puedes acceder a `Menú > Shutdown` y hacer click sobre el botón Shutdown. Espera hasta que se apague por completo para desconectar la fuente de alimentación.

En modo consola puedes apagarla mediante el comando `shutdown -h now`.

```sh
pi@raspberrypi: ~ $ sudo shutdown -h now
```

## Hora del sistema

La forma más sencilla de poner en hora una Raspberry Pi es accediendo a la terminal y estableciendo la hora mediante el comando `date mmddHHMMyy`, donde los 2 primeros números corresponden al mes, los 2 siguientes al día del mes, los 4 siguientes representan la hora y minutos, y los 2 últimos el año.

```sh
pi@raspberrypi: ~ $ sudo date 0416113019
```

# Resumen

La mejor forma de conocer un sistema operativo a nivel de usuario es utilizarlo para ver y conocer todas sus caracteríasticas.

# Ejercicios propuestos

1.- Revisa la configuración de tu teclado para que aparezca en español de España. `Menú > Preferencias Configuración de Raspberry Pi > Localización > Configuración teclado`.

2.- Conéctate a la WiFi y navega por el navegador Chromium para comprobar la correcta configuración.

3.- Cambia la apariencia del escritorio (fondo de escritorio, tamaño de la barra de tareas, etc.). `Menú > Preferencias > Configuración de la apariencia`.

4.- En el menú de aplicaciones encontrarás el programa de programación Scratch 2.0. Ábrelo y carga el proyecto `Asteroid Blaster` situado en la carpeta Documents de tu carpeta principal de usuario `/home/pi`.

5.- En `Menú > Juegos > Python Games` entra a los juegos programados en Python, en concreto al juego `Wormy`.

6.- Entra a `/usr/shared/python_games` y busca el `wormy.py`. Ábrelo (clic derecho) con el programa Thonny Python IDE. Remplaza el valor de la tercera línea `FPS = 15` por el nuevo valor `FPS = 5`. Ejecuta el programa y notarás la diferencia.