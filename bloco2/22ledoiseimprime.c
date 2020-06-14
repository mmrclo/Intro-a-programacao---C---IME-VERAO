/*2.2. Introdução - ler dois inteiros e imprimir resultado de expressão lógica
Construa um algoritmo que recebe dois números inteiros como entradas (digamos na variáveis a e b) e imprima 1 se ocorrer "a<b" e 0 em caso contrário.

Entrada esperada: dois números inteiros.
Saída esperada: 1 ou 0, respectivamente se "a<b" ou "a>=b".*/

#include<stdio.h>
int main () {
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	if(a<b) printf("1");
	else printf("0");
	return 0;
}
		
