/* 3.5. Laço - Soma dos números ímpares (até digitar 0)

Construa um algoritmo que lê uma sequência de números inteiros até que o usuário digite o valor 0. Seu algoritmo deve ao final imprimir a soma dos valores ímpares que foram digitados (somas apenas os ímpares).

Atenção: seu programa deve ter apenas um comando de impressão (i.e., deve haver apenas uma única linha com printf ou print e deve ser impresso a cada vez um único inteiro).

Dica: na linguagens C e Python, existe o operador "%" que calcula o resto da divisão de um número inteiro por outro. Por exemplo, ao calcularmos "11 % 6" obtemos a resposta 5, que é o resto da divisão de 11 por 6 (11 = 6 x 1 + 5).

Entrada esperada: uma sequência de números inteiros (tipo int) terminada em 0.

Saída esperada: um número inteiro (tipo int), contendo o valor da soma de todos os ímpares da sequência. */

#include<stdio.h>
int main () {
	int n=0,soma=0;
	do{
		scanf("%d",&n);
		if(n%2!=0)
			soma = soma + n;
	}
	while(n!=0);
	printf("%d",soma);
return 0;
}
