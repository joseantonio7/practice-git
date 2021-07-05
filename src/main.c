#include <stdio.h>
#include "fib.h"
 
int main(){
	int i = 0;
	for (i=0; i<4 ;i++){
		printf("hola mundo\n");
	}
	printf("El elemento 10 de la serie de fibonacci es: %ld\n",fibonacci(10));
}
