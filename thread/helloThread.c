#include <stdio.h>
#include <pthread.h>

#define NUM_THREAD 100
pthread_mutex_t lock;

long saldo = 1000;

void * printHello(void *td){
	//printf("Hola desde hilo %ld\n",(long)td);
	pthread_mutex_lock(&lock);
	long lsaldo = saldo;
	saldo = lsaldo + 100;
	pthread_mutex_unlock(&lock);
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
