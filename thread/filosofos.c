#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <semaphore.h>
#include <unistd.h>
#include <stdlib.h>

#define NUM_FILO 5
#define NUM_FORKS 5

sem_t forks[NUM_FORKS];

long randomInRange(int start, int end){
	return (start + random()%(end-start));	
}

void * life(void *td){
	long id = (long)td;
	srandom((id+1)*time(NULL));
	printf("Soy el filosofo [ %ld ]\n",id);	
	for(;;){
		// pensar -- Procesar
		printf("%ld> Voy a pensar \n",id);
		sleep(randomInRange(5,10));
		printf("%ld> Tengo hambre \n",id);
		if(id % 2 == 0){
			sem_wait(&forks[id]);
			sem_wait(&forks[(id + 1)%NUM_FILO]);
		}else{
			sem_wait(&forks[(id + 1)%NUM_FILO]);
			sem_wait(&forks[id]);
		}

		// comer -- Guardar
		printf("%ld> Voy a comer \n",id);
		sleep(randomInRange(2,6));
		sem_wait(&forks[id]);
                sem_wait(&forks[(id + 1)%NUM_FILO]);
	}
}	

int main(int argc, char ** argv){
	pthread_t filosofos[NUM_FILO];
	long t;
	
	for( t = 0 ; t < NUM_FILO; t++){
		sem_init(&forks[t],0,1);
	}

	for (t = 0 ; t < NUM_FILO ; t++){
		pthread_create(&filosofos[t],NULL, life,(void *)t);
	}

	pthread_exit(NULL);
     // return 0;
}
