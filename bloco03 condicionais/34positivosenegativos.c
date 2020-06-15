/* 3.4. Laço - Soma de positivos e negativos (inteiros) até digitar 0

Construa um programa C/Python que lê uma sequência de números inteiros, acumulando a soma de todos os valores positivos e a soma de todos os valores negativos (separadamente!). A sequência de entradas é encerrada pelo número 0 e, ao terminar, o programa deve imprimir primeiro a soma dos números positivos e depois a soma dos números negativos.

Entrada esperada: uma sequência de números inteiros (positivos e negativos), finalizados por pelo valor nulo (0).

Saída esperada: dois números inteiros, o primeiro contendo a soma de todos os números positivos digitados e o segundo contendo a soma dos negativos. */

#include<stdio.h>
int main () {
	int positivos=0,negativos=0,i=0,n=0;
	do{
		scanf("%d",&n);
		if(n>=0) positivos = positivos + n;
		else negativos = negativos + n;
	} while(n!=0);
	printf("%d %d",positivos,negativos);
return 0;
}
