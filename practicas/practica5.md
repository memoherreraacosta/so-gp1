# Objetivo
Hacer un spike sobre hilos, semáforos y locks. 


# Herramientas
+ git
+ gcc


# Conceptos:

+ Hilos
   + Es un proceso ligero que solo consta de un stack. Y el código y el heap los comparte con el proceso principal.
   + Pueden ejecutar funciones diferentes.
   
+ Semáforos:
   + Es una variable global.
   + Soporta dos operaciones.
    ++ Incrementar (sem_post) siempre incrementa en uno.
    ++ Decrementar (sem_wait) si el valor del semáforo es mayor que 0 decremente si es igual a cero se suspende
   + Controlar acceso a recursos.
    
+ Lock.
    + Es una variable global.
    + Soporta dos operaciones.
      ++ lock (bloqueo) adquirir el lock. Si el lock ya está tomando el hilo/proceso se suspende.
      ++ unlock (desbloquera) liberar el lock.
    + Secciones críticas.
    

# ¿Que aprendí?

+ En esta practica logre aterrizar los conceptos ya mencionados (Hilos, Semafotos, Locks) y reforzar los temas de clases pasadas como manejos de archivos del sistema operativo, llamadas de sistema, manejo de librerias, etc. 


# Url del commit

+ [Commit 1](https://github.com/memoherreraacosta/so-gp1/commit/fa1494a353d0d35a5dd714cb85b73471be509452)
+ [Commit 2](https://github.com/memoherreraacosta/so-gp1/commit/3171ce5d19e9476d125b8ae62028153e26597360)
