## Objetivo 
Crear dos llamadas a sistemas con sus respectivos comandos para apagar y reiniciar 

# Herramientas

make 

gcc

git

##Conceptos

1) Llamadas a sistema 

* Se usan para acceder al hardware
* Desde el comando son una interrupcion
* Desde el kernel usan el codigo de hardware especifico 

2) Modo Kernel

* Es el bit para acceder al hardware
* Se enciende cuando se ejecuta el kernel 

3) Interrupciones 

* Con el hw interactivo 

4) Interrupciones via software (trap)

* Software comunicar con el kernel SOFTWARE -> CPU -> KERNEL

##Que aprendi 

Lo que sucede en el HW de manera interna, la comunicación entre CPU -> RAM -> HDD en la relación de registros mareados a memoria. 

Vimos las interrupciones, el vector de interrupciones dentro del CPU. 

Las llamadas al sistema se comunica directo con el Kernel para poder acceder al hardware

1. Software invoca al Kernel.
2. Software emite una interrupción a nivel de Software. Esta está colocada en el vector de interrupciones donde se comunican directamente al Kernel para manejar la interrupción. 

Proceso del proceso, usamos el caso del llamar vim hello.c

- desde llamar al código fuente 
- Llamar a una interrupción del cpu 
- Activar el modo kernel
- El kernel abre su lista de llamadas de sistema y habla directamente con la RAM donde está guardado la información del “hello.c” para poder realizar la línea de comando 

Observamos como se comporta el dispositivo del HW ACPI el cual maneja desde una syscall el encendido, apagado, hibernado y suspendido. 



## Url del commit
https://github.com/memoherreraacosta/so-gp1/commit/1b79dfb49088f0609785d58d590e09abc6bb5ac7  
