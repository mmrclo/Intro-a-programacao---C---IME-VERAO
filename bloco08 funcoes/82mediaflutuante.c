/* 8.2 Dados n flutuantes determinar sua média e seu desvio padrão

Fazer um programa composto por três funções, a principal para entrada/saída de dados, uma para computar a média de valores flutuantes e a terceira para computar o desvio padrão dos valores flutuantes.

No seu programa principal, o usuário deve digitar um valor natural positivo n (51 > n > 0), seguido de n valores "reais". Em seguida, o programa principal deve imprimir a média e desvio padrão dos "reais", nesta ordem (ambos calculados usando as funções que você criou previamente). Supondo n valores armazenados no vetor vet[], deve-se computar:

Média atitmética: ma = (vet[0]+vet[1]+...+vet[n-1) ) / n

Desvio padrão: sqrt( ( (vet[0]-ma)*(vet[0]-ma) + (vet[1]-ma)*(vet[1]-ma) +...+ (vet[n-1]-ma)*(vet[n-1]-ma) ) / n ), sendo srqt a funcao para raiz quadrada (vide abaixo).

Atenção geral: Utilizar vetor (ou lista) para armazenar os "reais"; usar o comando for; usar a função pré-definida sqrt para computar raíz quadrada de valor positivo.

Atenção C: Utilizar o cabecalho #include <math.h> e, se usa via linha comando, compilar com: gcc -o seu_codigo seu_codigo.c -lm.

 

Entrada esperada: 1 número inteiro positivo n, seguido de n valores "reais".

Saída esperada: o valor da média e do desvio padrão dos n valores "reais". */

#include<stdio.h>
#include<math.h>

float mediaritimetica (int n,float *vet){
	int i=0;	
	float ma=0;
		for(i=0;i<n;i++){
			ma = ma + vet[i];
		}
	ma = ma/n;
	return ma;
}

float desviopadrao(int n, float ma, float *vet){
	int i=0;
	float dsvp=0;
	
	for(i=0;i<n;i++){
		dsvp = dsvp + (vet[i]-ma)*(vet[i]-ma);
	}
	dsvp = dsvp/n;
	dsvp = sqrt(dsvp);
	return dsvp;
}

int main() {
	int n=0,i=0;
	float ma=0;
	
	
	do{	
	scanf("%d",&n);
	} while(n<=0 || n>50);

	float vet[n];
	
	for(i=0;i<n;i++){
		scanf("%f",&vet[i]);
	}

	ma = mediaritimetica(n,vet);

	printf("%f %f",ma,desviopadrao(n,ma,vet));

	return 0;
}










