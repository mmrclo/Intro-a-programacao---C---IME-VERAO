/* 7.2 Pegar dígitos em n strings e montar inteiro associado, somando os inteiros

Fazer um programa em C para ler n e uma sequencia de n strings (vetor de caracteres). Seu programa deve converter cada string para o número natural correspondente, ignorando qualquer caractere que não seja dígito e depois deve somar os naturais. Se vier número negativo, ignorar o sinal de menos. Seu programa deve imprimir primeiro a soma dos naturais representados em cada string e depois cada um deles.

Exemplos
------------
Entradas:
2
0a23d9
a1b2

Saídas:
251 239 12
------------
Entradas: 
1 
abc

Saídas: 
0 0 
------------
Entradas: 
1 
a1c0 

Saídas: 
10 10
------------
Entradas:
3 
a1
a2
a3

Saídas:
6 1 2 3
------------
Entradas:
3 
21 
a2 
33

Saídas: 
56 21 2 33
------------

Dicas para C: Para declarar um vetor de strings, usar algo como: char vetc[100][200]; // declara 100 strings.

Entrada esperada: natural n>=0 e n strings.

Saída esperada: imprimir o natural correspondente à soma dos naturais convertidos e depois todos os n naturais. */

#include<stdio.h>
#include<string.h>
int main () {
	int i=0,j=0,n=0,digitos[100],nmros=0,soma=0,mult=1;
	
	char numeros[100][200];
	
	for(i=0;i<100;i++) digitos[i]=0;

	i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %s",numeros[i]);
		nmros++;
	}
	i=0;
	do{	
	n = strlen(numeros[i]);
	for(j=n;j>=0;j--){
		if((int)(numeros[i][j])>=48 && (int)(numeros[i][j])<=57){
			digitos[i] = digitos[i] + ((int)(numeros[i][j])-48)*mult;
			mult = mult*10;
		}
	}
	mult=1;	
	i++;
	} while(i<nmros);
	
	n = i;
	i=0;
	
	for(i=0;i<nmros;i++) soma=soma+(int)(digitos[i]);

	printf("%d ",soma);
	for(i=0;i<n;i++) {
		printf("%d ",digitos[i]);
	 }

return 0;
}































