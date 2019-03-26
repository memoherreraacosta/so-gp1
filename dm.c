#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv){
	int num = atoi(argv[1]);
	int i = 0;
	int j = 0;
	int k = 0;
	int q;

	for(i = 0; i < num ; i++){
		for(j = 0 ; i < 2*num ; j++){
			for(k = 0 ; i < 3*num  ; k++){
				q = num * j * i;
				printf(1,"llenar espacio",q);
			}
		}
	}
	q = q*num;
	exit();
}
