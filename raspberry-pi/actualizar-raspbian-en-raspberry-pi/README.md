## Introducción

En este tutorial vamos a explicar cómo actualizar el sistema operativo Raspbian desde la línea de comandos para tenerlo actualizado.

### Antes de empezar

Vas a necesitar los siguientes componentes:

- Raspberry Pi con Raspbian
- Conexión a internet



<br />



## Actualizar sistema operativo

<div class="iframe">
  <iframe src="//www.youtube.com/embed/EDj1nHo41MM" allowfullscreen></iframe>
</div>

Una vez hemos instalado Raspbian en nuestra Raspberry Pi, ya sea siguiendo el asistente de NOOBS o mediante la instalación de una imagen, conviene actualizar.



<br />



## Comando: update

Con el comando `apt update` actualizamos la lista de paquetes en el repositorio, es decir, se actualiza la lista de todos los paquetes con la dirección de dónde obtenerlos.

```sh
pi@raspberrypi: ~ $ sudo apt update
```

> Recuerda que antes de instalar un programa es recomendable actualizar la lista de paquetes en el repositorio.



<br />



## Comando: upgrade

Con el comando `apt upgrade` actualizamos nuestro sistema operativo con todas las posibles actualizaciones que pudiera haber tomadas de la lista de paquetes, es decir, actualiza los paquetes instalados a la última versión.

```sh
pi@raspberrypi: ~ $ sudo apt upgrade
```



<br />



## Comando: dist-upgrade

Con el comando `apt dist-upgrade` realizamos las mismas acciones que el anterior pero adicionalmente también es capaz de añadir paquetes no instalados o eliminar los obsoletos.

```sh
pi@raspberrypi: ~ $ sudo apt dist-upgrade
```



<br />



## Comandos: autoremove y autoclean

Con el comando `apt autoclean` se elimina de la cache las versiones antiguas de los programas que ya tenemos instalados y actualizados. Con el comando `apt autoremove` se eliminan los paquetes huérfanos después de la instalación o actualización del sistema.

```sh
pi@raspberrypi: ~ $ sudo apt autoclean
pi@raspberrypi: ~ $ sudo apt autoremove
```



<br />



## Ejercicios propuestos

1.- Actualiza el sistema operativo Raspbian a la última versión. Además deberás calcular el tiempo aproximado que ha llevado cada comando durante la actualización.

2.- Una vez actualizado, reinicia el sistema e intenta actualizarlo nuevamente. ¿Qué ha ocurrido esta vez?
