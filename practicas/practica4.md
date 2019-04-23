## Objetivo

Hacer un spike sobre IPC: señales, fork/exec, memoria compartida y archivos mapeados a memoria. 

## Herramientas

+ git
+ gcc

## Conceptos:

+ IPC
   + Comunicación entre procesos.
   
+ Señales:
   + Es un ipc, consta de un procesos emisor y un receptor. 
   El emisor manda una señal y el receptor deja de hacer lo que esta haciendo y ejecuta el código de la señal.
   + Existen varias señales, para listarlas puedo usar el comando kill -l.
  
+ Memoria compartida.
    + Se crea un bloque de memoria, el bloque de memoria tiene un key.
    + Cualquier proceso con el key se puede conectar al bloque.
    + El bloque de memoria persiste hasta que se borre mediante un comando o se reinicie la computadora.
    
+ Archivos mapeados a memoria.
    + Es un bloque de memoria compartida que esta asociado a un archivo.
    + Los cambios en el bloque se guardan automaticamente.
   
## ¿Que aprendí?

En esta practica aprendi el como funciona la creacion de procesos de una manera mas a detalle con la syscall 'fork()' , el como se manejan las señales desde el concepto de crear una nueva señal hasta implementarla, el acceso a espacios de memoria a nivel de registros y modificacion de archivos como un tipo editor de archivos.

## Url del commit

- [Primer commit](https://github.com/memoherreraacosta/so-gp1/commit/88222a552b6d34dd00b1e66cf9fecfae92a8e792)

- [Segundo commit](https://github.com/memoherreraacosta/so-gp1/commit/0e650cd97900c85564201547216d7140a843ae3e)
 
