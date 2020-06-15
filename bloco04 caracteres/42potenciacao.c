/* 
4.2 Dado n inteiro e x real, computar x^n

Construa um algoritmo que receba um número natural positivo e valor real (n e x), calcule e imprima o valor de xn. (potência de x elevado a n). Utilize apenas os operadores de soma e de produto de 2 inteiros.

Atenção, NÃO usar qualquer função da biblioteca C e em Python não usar o operador/função ** (o objetivo do exercício é construir a função potência a partir dos operadores aritméticos básicos).

Entrada esperada: 1 número natural positivo (n) e 1 número real (x).

Saída esperada: o valor da potência xn. */

#include <stdio.h>
int main () {
	int n=0,i=0;
	float x=0,potencia=0;
	scanf("%d %f",&n,&x);
	potencia = x;
	if(n==0){
		potencia = 1;
		}
	else {
		for(i=1;i<n;i++){
			potencia = (potencia * x);
		}
	}
	printf("%f",potencia);
return 0;
}	
	

