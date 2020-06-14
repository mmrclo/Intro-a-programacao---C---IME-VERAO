/* 9.2 Funções: Laço simples - Cálculo de fatorial (com entradas negativas)

Fazer um programa em C implementando obrigatoriamente uma função de nome fat, com 1 parâmetro n, que, dado um número inteiro n, devolva o fatorial de n se n>=0, caso contrário devolva -1. 
Fazer um programa principal que solicite que o usuário digite um inteiro qualquer e usando a funcão fat imprima o fatorial do natural digitado.

Lembrando, a função fatorial fat(n) é definida apenas para os naturais (com o zero), da seguinte forma: fat(0)=1 e fat(n)=n*fat(n-1), n>0. 
Assim, por exemplo, o fatorial de 4 é computado da seguinte forma: fat(4) = 4*3*2*1 = 24.

Dessa forma, é preciso convencionar o que fazer se o usuário digitar um número inteiro negativo, neste caso seu programa deverá imprimir -1.

Atenção: Esta é uma atividade para exercitar o conceito de funcões, assim será necessário que implemente uma função que NÃO tenha comandos de entrada de dados nela (os dados tem que ser providenciados por quem a invoca). 
Aqui deve-se usar obrigatoriamente como nome para a função  fat(n), sob pena de ter posteriormente diminuida sua nota na atividade.

Entrada esperada: um valor inteiro (int n).

Saída esperada: se n<0, imprimir -1, se n>=0, imprimir um número natural correspondente a fat(n). */

#include<stdio.h>

int fat(int n){
	int i=1,fatorial=1;

	if(n<0)	fatorial=-1;
	
	do{
		fatorial = fatorial * i;
		i++;
	}while(i<=n);
	
	return fatorial;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fat(n));

	return 0;
}


