/* 5.4 Laço simples: Dado N, determinar a soma dos N primeiros ímpares

Construa um programa que solicita que o usuário digite um inteiro positivo N e cuja saída seja a soma dos N primeiro ímpares.

Exemplos. Considere as seguintes entradas e respectivas saídas.

Entradas                                    Saídas
    1                                         1
    2                                         4
    3                                         9
    4                                         16
    5                                         25
    6                                         36

Entrada esperada: um inteiro positivo N.

Saída esperada: um inteiro positivo correspondente à soma dos N primeiros ímpares. */

#include<stdio.h>
int main () {
	int N=0,impares=0; //i=1;
	scanf("%d",&N);
	//do {
		impares = N*N;//i*i;
		//i++;
	//} while(i<=N);
	printf("%d",impares);
return 0;
}
