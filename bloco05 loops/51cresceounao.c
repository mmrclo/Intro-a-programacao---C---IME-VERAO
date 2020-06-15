/* 5.1 Laço simples: Determinar se sequência finalizada por 0 é crescente

Construa um programa solicita que o usuário digite inteiros positivos, finalizado por 0, e cuja saída seja: "sim N", sem as aspas, se a sequência contiver N valores positivos e formar uma sequência crescente; caso contrário imprima "nao N".

Exemplos. Considere as seguintes entradas e respectivas saídas.

Entradas                                     Saídas
 1 0                                         sim 1
 2 2 0                                       sim 2
 3 6 6 8 0                                   sim 4
 1 2 3 4 5 6 7 8 9 10 0                      sim 10
 1 1 1 1 1 1 1 1 1 1 0                       sim 10
 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0   sim 20
 2 1 0                                       nao 2
 1 2 1 0                                     nao 3
 4 6 8 1 0                                   nao 4
 5 4 3 4 0                                   nao 4
 3 6 6 8 1 0                                 nao 5
 5 4 3 2 3 0                                 nao 5
 8 7 6 5 5 6 0                               nao 6
 9 8 7 6 5 5 6 0                             nao 7
 1 2 3 4 5 6 7 8 9 1 0                       nao 10
 2 2 2 2 2 2 2 2 2 1 0                       nao 10
 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 1 0   nao 20

Entrada esperada: uma sequência de números inteiros positivos finalizada por 0.

Saída esperada: "sim" e N, se houver N valores positivos crescentes e "nao" e N em caso contrário. */

#include<stdio.h>
int main () {
	int anterior=0,n=0,total=0,crescente=1,decresceu=0;
	do{ 
		anterior = n;
		scanf("%d",&n);
		if(n==0) break;
			if(n>=anterior){
				crescente=1;
			}
			else{
				crescente=0;
			}
		if(crescente==0) decresceu = 1;
		total++;
	} while(n!=0);
	if(decresceu==1) 
		printf("nao %d",total);
	else
		printf("sim %d",total);
return 0;
}
	



















	
