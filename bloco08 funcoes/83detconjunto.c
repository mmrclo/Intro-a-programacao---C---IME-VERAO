/* 8.3 Determinar conjunto de representantes de vetor

Implementar uma função conjunto_representantes com parâmetros vet[], n, conjunto[], *soma, todos inteiros, que gera o vetor conjunto[] inserindo nele exatamente uma cópia de cada elemento distinto de vet[], na ordem de ocorrência. Em *soma deverá ser devolvido a soma de todos os elementos distintos de vet[] e a função conjunto_representantes deverá devolver o número de elementos distintos em vet[] (ou seja, o tamanho do vetor conjunto[] que foi construído).

ATENÇÃO: a ordem em que conjunto[] é construído é essencial para o avaliador automático, sua ordem é definida pelo menor índice em vet[], ou seja, se vet[]={-1, 3, -1, 5, 3, 10} o conjunto de representante deverá obrigatoriamente ser conjunto[]={-1, 3, 5, 10}.

No programa principal deve ser solicitado do usuário o valor n (51 > n > 0), depois os valores inteiros. Seu programa deverá então invocar a função conjunto_representantes imprimindo: o inteiro devolvido (o tamanho do conjunto de representantes), cada um dos elementos do conjunto de representantes e a soma dos representantes.

ATENÇÃO: Neste exercício deve-se obrigatoriamente usar funções. Entretanto o VPL NÂO verifica automaticamente o uso de funções e parâmetros. Isso pode ser feito posteriormente pelo professor ou monitores.

Exemplo
Entrada:
5
1 -2 1 3 8
Saída:
4 1 -2 3 8 10

Entrada:
1
0
Saída:
1 0 0

Entrada:
10
1 2 3 4 1 2 3 4 1 2
Saída:
4 1 2 3 4 10

Entrada esperada: um inteiro n seguido de n inteiros - nessa ordem.

Saída esperada: o número de elementos do conjunto de representantes, seguido de cada um de seus elementos e depois sua soma. */

#include<stdio.h>

int conjunto_representantes(int *vet, int n,int soma){
	int i=0,elementos=0,j=0;
	int conjunto[n];
	
	for(i=0;i<n;i++) conjunto[i]=vet[i];

	while(i<n){
		for(i=0;i<n;i++){
			if(conjunto[i]==conjunto[j]){
			conjunto[i]=conjunto[j];
			elementos++;
			soma = soma + conjunto[i];
		}
	}
	i++;
	}

	for(i=0;i<elementos;i++){
		vet[i]=conjunto[i];
	}
	
	return elementos;
}
	

int main() {
	int n=0,i=0,soma=0,*p;
	p = &soma;
	do{
	scanf("%d",&n);
	}while(n<1 || n>50);
	
	int vet[n];

	for(i=0;i<n;i++){
		scanf("%d",&vet[i]);
	}
	
	n = conjunto_representantes(vet,n,*p);
	printf("%d ",n);
	for(i=0;i<n;i++){
		printf("%d ",vet[i]);
	}
	printf("%d",soma);

return 0;

}
	
	































