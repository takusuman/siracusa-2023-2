#include <stdio.h>
#include <stdlib.h>

void main(void) {
	signed long int n;
	
	puts("Conjectura de Collatz, vulgo Problema de Siracusa");
	puts("Curso de Engenharia da Computação pela Universidade Norte do Paraná, 2023/2");
	puts("Solução por Luiz Antônio Rangel");
	putchar('\n');

	fputs("Insira um número inteiro: ", stdout);
	scanf("%ld", &n);
	
	// No código que enviei à faculdade, eu esqueci de adicionar isso.
	// Por favor, não esqueçam disso, um número negativo ou igual a zero
	// quebra o algoritmo inteiro.
	// Como o foco desse código estar público não é apenas mostrar o que eu
	// enviei, mas também uma solução ao problema, é bom que ele esteja
	// correto, mesmo que tarde.
	if ( n < 1 ) {
		fprintf(stderr, "O número \"n\" é menor do que 1 (%ld).\n", n);
		exit(1);
	}

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
