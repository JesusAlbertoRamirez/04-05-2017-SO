#include <stdio.h>
#include "fibo.h"

int main(int argc, char ** argv) {
	
	printf("El Fibonacci de %d\n es %d\n", argv[1], fibo(argv[1]));
	return 0;
	
}
