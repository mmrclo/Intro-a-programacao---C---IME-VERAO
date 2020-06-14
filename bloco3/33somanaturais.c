/* 3.3. Laço - Somatório dos primeiros naturais até um limite
Construa um programa C/Python que lê um natural (digamos na variável total) e computa a maior soma de naturais consecutivos, começando no 1, que seja menor ou igual ao valor digitado (<=total).

Exemplos: Se o usuário digitar 104 (total=104), então seu programa deverá computar o somatório 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 = 91. Se o usuário digitar 105 (total=105), então seu programa deverá computar o somatório 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 = 105.

Entrada esperada: um natural total.

Saída esperada: um natural correspondente ao somatório. */


#include <stdio.h>
int main () {
	int total=0,soma=0,i=0;
	scanf("%d",&total);
		do{
			i = i + 1;
			soma = soma + i;
		}
		while(soma<=total);
	if(soma>=total)
		soma = soma - i;
	printf("%d",soma);
return 0;
}
