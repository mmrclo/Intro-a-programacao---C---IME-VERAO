/* 
4.1 Dado n, computar a soma dos n primeiros termos da série harmônica

Construa um algoritmo que receba um natural positivo n (n>0) e imprime a soma dos n primeiros termos da série harmônica abaixo definida.

H = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/k + ...

O objetivo dessa atividade é exercitar os conceitos iniciais de programação, portanto não procure uma forma fechada para Hn (deve-se implementar um laço).

Entrada esperada: 1 número inteiro positivo n.

Saída esperada: o valor da soma dos n primeiros termos da série harmônica H, acima definida. */

#include <stdio.h>
int main () {
	int n=0,i=1;
	float somash=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		somash = somash + ((1)/(float)(i));
		}
	printf("%f",somash);
return 0;
}

