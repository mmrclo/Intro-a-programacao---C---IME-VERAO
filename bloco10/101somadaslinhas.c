/* 10.1. Introdução às matrizes: imprimir linhas e soma da linha

Fazer um programa no qual o usuário digita inteiros positivos m e n (101 > m > 0, 101 > n > 0), seguido de m x n valores reais (float), que deverão ser armazenados em uma matriz de ordem m x n. 
Depois seu programa deve imprimir cada linha, seguido do sinal de "=" e a soma da linha, começando pela linha 0, depois linha 1 e assim por diante.

Obrigatório: Para a matriz ficar bem organizada deve-se utilizar o formatador %5.1f (ajustado 5 casas à direita, usando um único decimal) para imprimir.

Atenção: Não será permitido a inclusão de pacotes auxiliares, deverá ser usado apenas o #include <stdio.h>.

Dica: Em C a impressão de um valor flutuante neste formato é printf("%5.1f", A[i][j]);. Ao final de cada linha deve-se fazer algo como printf(" = %5.1f", somaL);.

Entrada esperada: os inteiros m>0 e n>0, seguido de m x n reais (float).

Saída esperada: imprimir os m x n elementos da matriz em ordem crescente de índices, por linhas e na linha por coluna e após o último elemento de cada linha, imprima sua soma e mude de linha (\n). */


#include<stdio.h>

int main (){
	int m=0,n=0,i=0,j=0;
	float matriz[100][100],somaL=0;
	do{
		scanf("%d %d",&m, &n);
	}while(m>100 || m<1 || n>100 || n<1);
 
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%f",&matriz[i][j]);
		}
	}

	for(i=0;i<m;i++){
		somaL=0;
		for(j=0;j<n;j++){
			printf("%5.1f ",matriz[i][j]);
			somaL = somaL + matriz[i][j];
		}
		printf(" = %5.1f\n",somaL);
	}

return 0;

}



	

