/* 2.4. Introdução - operador resto da divisão inteira 

Construa um programa que recebe um número inteiro não negativo e verifique se ele é par ou ímpar. Se for par seu programa deve imprime 1, caso contrário (é ímpar) deve imprimir 0.

Entrada esperada: um número inteiro (int) maior ou igual a zero.
Saída esperada: os números inteiros (int) 0 ou 1.

Dica: nas linguagens C e Python, existe o operador "%" que calcula o resto da divisão de um número por outro. Por exemplo, ao calcularmos "11 % 6" obtemos a resposta 5, que é o resto da divisão de 11 por 6 (11 = 6 x 1 + 5). */

#include<stdio.h>
int main (){
	int nmro=0;
	scanf("%d",&nmro);
	if(nmro>=0){
		if(nmro%2 == 0) printf("%d",1);
		else printf("%d",0);
	}
	return 0;
}


