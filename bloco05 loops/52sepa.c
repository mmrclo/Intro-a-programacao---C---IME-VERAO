/*5.2 Laço simples: Determinar se sequência finalizada por 0 forma uma P.A.

Construa um programa que solicita que o usuário digite inteiros positivos, finalizado por 0, e cuja saída seja: "sim r", sem as aspas, se a sequência contiver N valores que formam uma Progressão Aritmética (P.A.) de razão r; caso contrário imprima "nao N".

Convenções: pode-se supor que o usuário digitará ao menos um valor positivo R, neste caso imprimir "sim R"; não usar acento em caso de resposta negativa "nao N".

Exemplos. Considere as seguintes entradas e respectivas saídas.

Entradas                                       Saídas
    5 0                                         sim 5
    99 0                                        sim 99
    2 4 0                                       sim 2
    3 6 9 12 0                                  sim 3
    3 6 9 11 0                                  nao 4
    1 2 3 4 5 6 7 8 9 10 0                      sim 1
    1 2 3 4 5 6 7 8 9 9 0                       nao 10
    2 2 3 4 5 6 7 8 9 10 0                      nao 10
    1 3 3 4 5 6 7 8 9 10 0                      nao 10
    1 2 4 4 5 6 7 8 9 10 0                      nao 10
    1 2 3 4 5 6 7 8 9 9 0                       nao 10
    2 4 6 8 10 12 14 16 18 20 0                 sim 2

Entrada esperada: uma sequência de números inteiros positivos finalizada por 0.

Saída esperada: "sim" e R, se houver N valores positivos formando P.A. de razão R e "nao N" em caso contrário. */

#include<stdio.h>
int main () {
	int i=0,r=0,n=0,anterior=0,pa=1,razaoanterior=0;
	scanf("%d",&n);
	razaoanterior = n;
	do{	
		i++;
		scanf("%d",&n);
		if(n==0) break;
		r = n - razaoanterior;
		if(r==razaoanterior) pa=1;
		else pa = 0;
		//razaoanterior = n;
		
	} while(n!=0);

	if(pa==1) 
		printf("sim %d",r);
	else 
		printf("nao %d",i);

return 0;
}
	
		


























