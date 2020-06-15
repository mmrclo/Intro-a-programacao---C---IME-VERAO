/* 4.3 Introdução ao uso de caracteres: dado n e n caracteres, obter seu código ASCII

Construa um programa que receba como entrada um número inteiro n e depois n caracteres, imprimindo os códigos ASCII (American Standard Code for Information Interchange) de cada um dos caracteres.

Dica C: Ao usar "char c;" para imprimir o código ASCII do caractere em C, basta fazer: printf("%d\n", (int)c). Cuidado com a leitura de caracteres, usar o seguinte comando: scanf(" %c", &c);   (note que o branco antes do '%c' é obrigatório).

Dica Python: Fazer a leitura do inteiro de modo usual (n=int(input())) mas para a leitura dos caracteres, usar: c = raw_input().

Entrada esperada: um número inteiro n, positivo (maior do que 0) e n caracteres.

Saída esperada: o código ASCII dos caracteres digitados. */

#include <stdio.h>
int main () {
	int n=0,i=0;	
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %c",&c);
		printf("%d\n",(int)c);
	}
return 0;
}

