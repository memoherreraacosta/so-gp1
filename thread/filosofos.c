#include <stdio.h>
#include <pthread.h>

#define NUM_FILO 5
#define NUM_FORKS 5

semaphore_t forks[NUM_FORKS]

void * life(void *td){
	long id = (long)td;
	for(;;){
		// pensar
		if(id % 2 == 0){
			sem_wait(&forks[id]);
			sem_wait(&forks[(id + 1)%NUM_FILO]);
		}else{
			sem_wait(&forks[(id + 1)%NUM_FILO]);
			sem_wait(&forks[id]);
		}

		// comer 
	}
}	

int main(int argc, char ** argv){
	pthread_t threads[NUM_THREAD];
	long t;
	for (t = 0 ; t < NUM_THREAD ; t++){
		pthread_create(&threads[t],NULL, printHello,(void *)t);
	}
	
	for (t = 0 ; t < NUM_THREAD ; t++){
		pthread_join(threads[t],NULL);
	}

	printf("Saldo final [ %ld ]\n",saldo);
	pthread_exit(NULL);
	return 0;
}
