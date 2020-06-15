/* 8.1 Determinar se um vetor está em ordem crescente

1. Implementar uma função de nome determineSeOrdenado que recebe como parâmetros um inteiro n  um vetor de inteiros vet (com n elementos) e que devolve 1 se os elementos em vet[] estão em ordem crescente e 0 em caso contrário (ou seja, se vet[0] < vet[1] < ... < vet[n-1],  devolve 1 e em qualquer outra configuração devolve 0).

2. Fazer um programa principal no qual o usuário digita 41>n>0, seguido de n valores inteiros que são armazenados em um vetor. Usando a função do item 1, seu programa deve imprimir 1 se o vetor está em ordem crescente e 0 em caso contrário.

Entrada esperada: um inteiro n seguido de n inteiros - nessa ordem.

Saída esperada: o valor 1 se a sequência de n números estiver em ordem crescente e 0 em caso contrário. */

#include<stdio.h>

int determineSeOrdenado(int n, int *vet){
	int i=0, ordenado=1;
	
	if(n!=1){	
	for(i=0;i<n-1;i++){
		if(!((vet[i]<vet[i+1]) || (vet[i]==vet[i+1]))) ordenado=0;
		
		}	
	}
	return ordenado;
}

int main () {
	int vetor[41], n=0, i=0;
	
	do {
	scanf("%d",&n);
	}while(n<=0 || n>40);

	for(i=0;i<n;i++){
		scanf("%d",&vetor[i]);
	}

	printf("%d",determineSeOrdenado(n,vetor));

return 0;

}






	
