## Introducción

En este tutorial de iniciación a la programación con Scratch 2.0 aprenderás a utilizar la herramienta de Scratch 2.0 para programar diferentes tipos de videojuegos y animaciones mediante el lenguaje de programación por bloques de Scratch. 

![](img/preview.gif "Juego de persigue con Scratch 2.0")

### ¿Qué es Scratch?

Scratch es un entorno gráfico de programación desarrollado por un grupo de investigadores del Lifelong Kindergarten Group del Laboratorio de Medios del MIT, bajo la dirección del Dr. Mitchel Resnick.

Este entorno gráfico hace que la programación sea más atractiva y accesible para todo aquel que se enfrenta por primera vez a aprender un lenguaje de programación. Según sus creadores, fue diseñado como medio de expresión para ayudar a niños y jóvenes a expresar sus ideas de forma creativa, al tiempo que desarrollan habilidades de pensamiento lógico.

> Scratch permite crear fácilmente historias interactivas propias, animaciones, juegos, grabar sonidos y realizar creaciones artísticas.

La aplicación de los lenguajes de programación por bloques permite una presentación visual del paradigma y metodología de la programación informática permitiendo centrarse en la lógica de la programación dejando a un lado la sintaxis propia de los lenguajes de programación (puntos y comas, paréntesis, etc).

### Beneficios de Scratch

Son varios los estudios que han demostrado que mediante la programar se desarrollan ciertas habilidades cognitivas como:

- Desarrollo del pensamiento lógico
- Fomento de la creatividad
- Mejora en el razonamiento
- Resolución de problemas

> Mediante los lenguajes de programación se desarrollan habilidades cognitivas y socio-emocionales.

Un estudio realizado a niños de infantil programando con Logo, demostró que obtienen mejores resultados en pruebas de matemáticas, de razonamiento y resolución de problemas.



<br />



## Acceder a Scratch

<div class="iframe">
  <iframe src="//www.youtube.com/embed/BMU-UlPf_0A" allowfullscreen></iframe>
</div>

Para empezar a utilizar Scratch tan sólo tendrás que elegir entre una de las dos modalidades del programa:

- Ejecutarlo en su versión online a través de un navegador desde la página web oficial. Si eliges la modalidad online es muy recomendable registrarse para poder guardar los proyectos que crees y tenerlos siempre a tu disposición.
- Descarga e instala Scratch en su versión offline, para ejecutarlo sin necesidad de navegador ni de conexión a Internet.

Tanto la versión online como la offline son multiplataforma y están pensadas para ejecutarse en sistemas Windows, Mac OS X y Linux. Las diferencias entre una y otra son inexistentes en cuanto a la programación, aunque si que nos gusta destacar como principal característica la opción de compartir proyectos o utilizar la mochila de objetos en la versión online.

![](img/scratch-online-vs-offline.jpg "Scratch online vs. offline")

### ¿Qué es un algoritmo?

En matemáticas, lógica, ciencias de la computación y disciplinas relacionadas, un algoritmo es un conjunto prescrito de instrucciones o reglas bien definidas, ordenadas y finitas que permite realizar una actividad mediante pasos sucesivos que no generen dudas a quien deba realizar dicha actividad.

Dados un estado inicial y una entrada, siguiendo los pasos sucesivos se llega a un estado final y se obtiene una solución.

> El estudio de la complejidad de un algoritmo respecto a sus recursos es conocido como algoritmia, la cual no es tratada en este curso.



<br />



## Pantalla de Scratch

<div class="iframe">
  <iframe src="//www.youtube.com/embed/7P8q1ltd44Y" allowfullscreen></iframe>
</div>

Sobre la izquierda tenemos el escenario o lugar donde podemos ver el resultado de nuestro programa. En este ejemplo el gato es un objetivo sobre el cual podemos trabajar, se trata en realidad del logo de Scratch que aparece por defecto.

Pero no hay limitaciones en cuanto a objetos a utilizar, la misma aplicación cuenta con una galería donde elegirlos e incluso se pueden crear a partir de fotos, subir o editar (pintar, modificar) en el mismo Scratch. También podemos trabajar con distintos escenarios al mismo tiempo y agregarles fondos personalizados a cada uno de ellos.

![](img/escenario-de-scratch.jpg "Escenario de Scratch")

### Bloques de programación

En la parte central podemos ver la paleta de bloques que podemos utilizar para nuestro programa, se dividen en diferentes categorías y colores para poder identificarlos mejor. También hay otras dos pestañas con más opciones que permiten trabajar con sonidos y disfraces, estos son los diseños o las distintas formas que un mismo objeto puede tener.

Por ejemplo, el gato es un objeto que por defecto tiene dos disfraces… la diferencia entre ellos es la posición de sus patas que permiten generar un efecto de movimiento si le ordenamos caminar.

![](img/bloques-de-scratch.jpg "Bloques de Scratch")

### Área de programación

Por último, sobre la derecha veremos el área de trabajo o programación donde los bloques se deben colocar de forma ordenada para crear el programa. Observa la forma anidada de puzle que tiene la programación. Es importante no dejar bloques sueltos ya que llevan a confusión y/o errores.

![](img/programacion-de-scratch.jpg "Programación de Scratch")



<br />



## Primeros pasos

<div class="iframe">
  <iframe src="//www.youtube.com/embed/vMVBzr_rh2g" allowfullscreen></iframe>
</div>

En esta lección aprenderás los principales bloques del lenguaje de programación por bloques de Scratch.

- Bloque de movimiento: grupo de instrucciones caracterizadas por el color azul obscuro. Te permitirá mover al objeto en x-y, girar tanto en sentido de reloj como sentido contrario, cambiar la dirección del objeto derecha-izquierda, arriba, abajo. Posicionar al objeto en el lugar deseado. Rebotar al objeto si se toca algún borde, etc.
- Bloque de apariencia: grupo de instrucciones caracterizadas por el color morado. Te permitirá cambiar de disfraz al objeto, decir algún comentario, aplicar algún efecto digital a la imagen de disfraz, cambiar tamaño, mostrar, esconder, enviar al frente, enviar hacia atrás n capas.
- Bloque de sonido: grupo de instrucciones caracterizadas por el color rosa. Te permitirá tocar algún sonido desde archivo, una nota musical en específico, cambiar el volumen, cambiar el tempo de la nota musical.
- Bloque de lápiz: grupo de instrucciones caracterizadas por el color verde. Te permitirá dibujar en el escenario conforme se va moviendo el objeto, se puede cambiar el color, intensidad y tamaño del lápiz, así mismo se puede bajar, subir o sellar el lápiz.
- Bloque de control: grupo de instrucciones caracterizadas por el color naranja. Este bloque de instrucciones tiene la opción de detectar eventos o acciones realizados por otros objetos y reaccionar a ellos. También permite detectar el teclado y reaccionar a alguna tecla presionada. Te permitirá crear ciclos iterativos y condicionales, dentro de los cuales se realizarán instrucciones de otros bloques. Ejecutar instrucciones al iniciar un programa o animación, presionando la Bandera Verde y detener el programa o Todo.
- Bloque de sensores: grupo de instrucciones caracterizadas por el color azul claro. Te permitirá detectar si el objeto está tocando algún color, puede detectar alguna tecla presionada del teclado, leer las posiciones x-y del ratón, detectar la distancia al apuntador del ratón. En este grupo de instrucciones se obtienen los valores de los dispositivos externos o kits robóticos (acciones para robots). Podrás saber si el volumen esta fuerte. Se puede hacer una pregunta y leer el valor tecleado para almacenarlo en una variable.
- Bloque de operadores: grupo de instrucciones caracterizadas por el color verde. Te permitirá realizar operaciones lógicas como matemáticas básicas. Entre las operaciones lógicas encontramos and, or y not. Y operaciones matemáticas como suma, resta, multiplicación, división, raíz cuadrada, operaciones logarítmicas y trigonométricas básicas, mayor, menor e igual.
- Bloque de variables: grupo de instrucciones caracterizadas por el color rojo. Podrás crear variables, las cuales solo pueden almacenar un valor y listas que son variables que almacenan un conjunto de variables.



<br />



## Juego de persigue

<div class="iframe">
  <iframe src="//www.youtube.com/embed/XQMv802TZQQ" allowfullscreen></iframe>
</div>

En esta lección vamos a realizar un ejemplo básico del juego de persigue para que el alumno empiece a entender el concepto de la programación por bloques paso a paso. Este sencillo videojuego es el primero que recomendamos para entender el funcionamiento del lenguaje de programación por bloques de Scratch.

![](img/preview.gif "Videojuego de persigue")

Para ello vamos a utilizar los bloques de movimiento para interactuar con el personaje principal del videojuego. Por otro lado, crearemos un algoritmo para que el segundo personaje se mueva siguiendo a nuestro personaje.

Recuerda que estamos utilizando los bloques de movimiento que permiten mover al objeto en las direcciones "x" e "y" del escenario, girar tanto en sentido de reloj como sentido contrario, cambiar la dirección del objeto derecha, izquierda, arriba y abajo, posicionar al objeto en el lugar deseado, rebotar al objeto si se toca algún borde, etc.



<br />



## Datos en Scratch

<div class="iframe">
  <iframe src="//www.youtube.com/embed/anzXUgb6rkU" allowfullscreen></iframe>
</div>

En esta lección vamos a aprender a utilizar las variables. Las variables son una especie de cajas en las que podemos almacenar cualquier tipo de dato o valor, como pueden ser los puntos de un personaje, el número de vidas, etc.

En este videojuego vamos a crear la variable "Velocidad" encargada de almacenar la velocidad de uno de nuestros personajes. Sin embargo, podríamos crear varios tipos de variables para almacenar otros datos.

> ¿Te atreves a crear una variable para contar el número de veces que capturamos al pez pequeño?
