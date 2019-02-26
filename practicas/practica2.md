## Objetivo 

Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa anterior.

## Herramientas

make
gcc
git


## Conceptos

1) Proceso

+ Es una instancia de un programa.
+ Esta compuesta por 3 partes.
++ Stack: variables y funciones esta limitado. Crece de arriba hacia abajo. Stack overflow
++ Heap: Area de memoria dinamica = RAM + SWAP
++ Codigo: Segmentado, ie es una parte

+ Tiene estados

+ Se crea mediante dos llamadas a sistema:
++ Fork: clone 
++ Exec: cambia el codigo

+ Hay un proceso padre
++ init

2) Modo Kernel
+ Es el bit para acceder al HW
+ Se prende cuando se ejecuta el software

3) Interrupciones
+ Como el hw interactua con el cpu

4) Interrupciones via software
+ Software comunicar con el kernel, SF -> CPU -> Kernel

## Que aprendi

## Url del commit
