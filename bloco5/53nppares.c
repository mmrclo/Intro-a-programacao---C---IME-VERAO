/* 5.3 Laço simples: Dado N, determinar a soma dos N primeiros pares

Construa um programa que solicita que o usuário digite um inteiro positivo N e cuja saída seja a soma dos N primeiro pares. Considere o inteiro 0 como o primeiro número par.

Exemplos. Considere as seguintes entradas e respectivas saídas.

Entradas                                                                     Saídas
    1                                         0
    2                                         2
    3                                         6
    4                                         12
    5                                         20
    6                                         30


Entrada esperada: um inteiro positivo N.

Saída esperada: um inteiro positivo correspondente à soma dos N primeiros pares. */

#include<stdio.h>
int main () {
	int N=0,i=0,pares=0;
	scanf("%d",&N);
	do {
		pares = pares + i*2;
		i++;
	} while(i<N);
	printf("%d",pares);
return 0;
}
	



















