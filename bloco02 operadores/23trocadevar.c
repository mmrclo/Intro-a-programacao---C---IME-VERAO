/*2.3. Introdução - ler dois inteiros e trocar os conteúdos das variáveis
Construa um algoritmo utilizando apenas 3 variáveis de nomes: a, b e aux. Se algoritmo deve: solicitar que o usuário digite 2 valores, armazenando o primeiro em a e o segundo em b; trocar o conteúdo na da variável a com o de b; imprimir o valor de a e de b, nesta ordem!

Entrada esperada: dois números inteiros (a e b).
Saída esperada: dois números inteiros (a e b). */

#include<stdio.h>
int main () {
	int a=0,b=0,aux=0;
	scanf("%d %d",&a, &b);
	aux = a;
	a = b;
	b = aux;
	printf("%d %d",a,b);
	return 0;
}

