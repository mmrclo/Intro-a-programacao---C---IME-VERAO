//experimentos com ponteiros e passagem de parametros 
#include<stdio.h> 
void imprimevetor(int *vetor,int *numero){
	int i=0,n=5;
	for(i=0;i<n;i++){
		printf("%d ",vetor[i]+1);
	}
	printf("%d ",*numero);
}

int main () {
	int i=0,vet[5],n=5;
	for(i=0;i<n;i++) vet[i]=i;
	imprimevetor(vet,&n);

	return 0;
}
	
	
	
