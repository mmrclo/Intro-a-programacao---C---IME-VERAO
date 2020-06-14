/* 9.4 Laço simples - Determinar o comprimento da maior subsequência crescente

Construa um programa que receba um número natural positivo n (60 >= n >=1) e a seguir uma lista de n valores inteiros positivos.
O programa determina e imprime o tamanho da maior subsequência crescente. 
Entenda-se por tamanho da subsequência o número de elementos (naturais) que ela apresenta.

Observação: Sejam a, b e c valores inteiros. Considere a sequência de valores {a, b, c}, dizemos que uma subsequência de tamanho 2 {a, b} é crescente se a < b ou a = b; assim, se a<=b e b<=c, a subsequência {a, b, c} é crescente e tem tamanho 3.
Além disso,  o tamanho da menor subsequência de qualquer sequência não vazia é 1 (qualquer valor da sequência é considerado uma subsequência). 

Exemplos:
 1. Entrada: 1 9
     Saída: 1
 2. Entrada: 3 3 2 1
     Saída: 1
 3. Entrada: 3 1 1 1
     Saída: 3
 4. Entrada: 6 1 2 3 4 4 3
     Saída: 5

Entrada esperada: Um número natural positivo (n) e depois n valores inteiros.

Saída esperada: o tamanho da maior subsequência crescente. */

#include<stdio.h>

int main () {
	int n=0,i=0,max=1,sequencia=0;
	do{
		scanf("%d",&n);
	}while(n<1 || n >60);

	int lista[n];

	for(i=0;i<n;i++){
		scanf("%d",&lista[i]);
	}

	for(i=0;i<(n-1);i++){
		sequencia=1;
		while(i<(n-1) && (lista[i]<lista[i+1] || lista[i]==lista[i+1])){
			i++;
			sequencia++;
		}
		if(sequencia>max) max = sequencia;
	}

	printf("%d",max);

	return 0;

}



