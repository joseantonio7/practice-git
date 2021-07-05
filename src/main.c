#include <stdio.h>
#include "fib.h"
#include "fac.h"
 
//comernto algo 
int main(){
	int i = 0;
	for (i=0; i<4 ;i++){
		printf("hola mundo\n");
	}
	printf("El elemento 10 de la serie de fibonacci es: %ld\n",fibonacci(10));
	printf("El factorial de 5 es: %ld\n",factorial(5));

	//y aquí tambien
	return 0;
}
