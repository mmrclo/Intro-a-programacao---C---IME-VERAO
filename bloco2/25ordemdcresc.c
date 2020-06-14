/* 2.5. Introdução - seleções encaixadas, ordenar decrescente 3 inteiros

Construa um programa que recebe três (3) números inteiros e os imprima em ordem decrescente.

Atencão, neste exercício deve-se explorar o comando de seleção if, por isso utilize apenas 3 variáveis! Note também que a sequência "2 2 1" deveria resultar a impressão "2 2 1". Se utilizar mais que 3 variáveis, após o fechamento da atividade, exeminaremos as soluções e sua nota poderá ser reduzida.

Entrada esperada: três números inteiros (int).
Saída esperada: os números inteiros, em ordem decrescente. */

#include<stdio.h>
int main () {
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(b>c) printf("%d %d %d",a,b,c);
		else {
			if(a>c) 
				printf("%d %d %d",a,c,b);
			else
				printf("%d %d %d",c,a,b);
		}
	}
	else if(b>c){
			if(c>a) printf("%d %d %d",b,c,a);
			else printf("%d %d %d",b,a,c);
		}
	else printf("%d %d %d",c,b,a);
	return 0;
}
