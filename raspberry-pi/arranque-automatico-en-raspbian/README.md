En este tutorial vamos a explicar cómo **crear un arranque automático** de un programa en Raspberry Pi con Raspbian.

# Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian

# RC.LOCAL

Para que un comando o programa se ejecute cuando se inicia tu Raspberry Pi puedes agregar comandos al archivo `/etc/rc.local`. Esto es especialmente útil si quieres hacer que ejecute un programa sin configuración o un inicio manual.

## Arranque automático

En ocasiones nos gustaría ejecutar un programa al iniciar o encender la Raspberry Pi. En este caso, tenemos que añadir la ejecución del mismo en el fichero `/etc/rc.local` encargado para tal fin.

En primer lugar debemos darle permisos de ejecución a nuestro fichero principal.

```sh
pi@raspberrypi:~ $ sudo chmod +x fichero.py
```

Para probar que nuestro proyecto funciona, podemos ejecutar el comando de ejecución de python3. Para pararlo, utiliza las teclas `ctrl + c`.

```sh
pi@raspberrypi:~ $ python3 fichero.py
```

Una vez hemos comprobado que funciona correctamente, nos falta añadir la anterior instrucción al fichero `rc.local` justo antes de la última línea 'exit 0'.

```sh
pi@raspberrypi:~ $ sudo leafpad /etc/rc.local
```

Observa en este caso como se añade la ruta absoluta del fichero a ejecutar justo antes de la instrucción `exit 0`.

```
...

python3 /home/pi/fichero.py

exit 0
```

# Resumen

Con este sencillo tutorial podemos crear programas en Python para que se ejecuten al arrancar nuestra Raspberry Pi.

# Ejercicios propuestos

1.- Crea un sencillo proyecto web en Python con Flask y agrégalo al fichero `rc.local` para que se ejecute al arrancar la Raspberry Pi.
