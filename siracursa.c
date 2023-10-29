#include <stdio.h>
#include <stdlib.h>

void main(void) {
	long int n;
	
	puts("Conjectura de Collatz, vulgo Problema de Siracusa");
	puts("Curso de Engenharia da Computação pela Universidade Norte do Paraná, 2023/2");
	puts("Solução por Luiz Antônio Rangel");
	putchar('\n');

	fputs("Insira um número inteiro: ", stdout);
	scanf("%ld", &n);
	
	for (;;) {
		if (n != 1) {
			if ( (n % 2) == 0 ) {
				n=( n / 2 );

			} else { 
				n=( (3 * n) + 1 );
			}
		} else { 
	       		break;
		}
		printf("%ld\n", n);	
	}
}
