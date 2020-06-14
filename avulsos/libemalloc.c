/*Header - Cabeçalho - definir a estrutura básica da função: ===== tipo de retorno indentificador (parâmetros); ======
Implementação posterior
Aprimora o funcionamento do compilador.

Bibliotecas - minhalib.h 
#ifndef _MINHALIB_H_
#define _MINHALIB_H_

//cabeçalho das minhas funcoes
int somar(int,int);
double dobro(double);

#endif

=================================
Salvar como minhalib.c

#include "minhalib.h"

int somar(int a, int b){
	return a + b;
}

double dobro(x double){
	return x*2;
}

Geração do código objeto da biblioteca.
gcc -Wall -ansi -pedantic-errors -c minhalib.c -o minhalib.o */

//recebe um n e aloca dinamicamente contagem ate n, imprime endereço do ponteiro.
#include<stdio.h>
#include<stdlib.h>

int main () {
	int n=0,*memoria, i=0;
	scanf("%d",&n);
	
	//chamada de alocação dinamica de memória
	memoria = (void*) malloc(n*(sizeof(int)));
	if(memoria){
		for(i=0;i<n;i++){
			memoria[i] = i;
		}

		for(i=0;i<n;i++){
			printf("Endereco %d: %p \n",memoria[i],&memoria[i]);
			}
		}
	else printf("\n Nao alocado");
	
	free(memoria);

return 0;
}



























