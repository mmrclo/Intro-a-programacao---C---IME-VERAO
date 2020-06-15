/* Construa um programa C que verifica se 3 números podem ou não representar os ângulos de um triângulo. Seu algoritmo deve solicitar que o usuário digite os 3 números naturais (representando ângulos em graus) e imprimir: "Sim" e os 3 números na sequência digitada, se somarem 180; e "NAO" e a soma dos 3 números em caso contrário.

Atenção: Note que o "Sim" tem apenas o "S" maiúsculo e "NAO" é sem acento e todo maiúsculo.

Entrada esperada: três números naturais (maiores que 0).

Saída esperada: se as entradas somarem 180, "Sim" e os 3 números e se não somarem, imprimir "NAO" e a soma dos 3 números (atenção, não usar acento em NAO). */

#include <stdio.h>
int main () {
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0){		
		if(a+b+c==180)
			printf("Sim");
		else
			printf("NAO %d",a+b+c);
	}
return 0;
}
