/* 9.3 Funções: Laço simples - Descubra se um inteiro é primo via função

Construa uma função de nome primo, com um parâmetro inteiro n e que devolva 1, se n for primo e 0 em caso contrário.
Fazer um programa principal deve solicitar que o usuário digite um natural n>0 e, obrigatoriamente usando a função primo com este valor, e de acordo com o resultado imprimir 1 se o valor digitado for primo e 0 em caso contrário. 

Observacão: Um número natural (não nulo) é primo se e somente se não for 1 e seu único divisor (maior que 1) é ele próprio. Assim, entre os primeiros 11 naturais, os primos são: 2, 3, 5, 7 e 11; e o não primos: 1, 4, 6, 8, 9 e 10.

Atenção: Esta é uma atividade para exercitar o conceito de funções, assim será necessário que implemente uma função que NÃO tenha comandos de entrada  e saída de dados nela
Aqui deve-se usar obrigatoriamente como nome para as função primo sob pena de ter posteriormente diminuida sua nota na atividade.

Entrada esperada: um número inteiro positivo (maior do que 0).

Saída esperada: 0 ou 1, dependendo da verificação se o inteiro é primo ou não. */

#include<stdio.h>

int primo(int n){
	int primo=-1,i=1;

	for(i=1;i<=n;i++){
		if(n%i==0) primo++;
	}
	
	if(primo>1 || n==1) primo=0;
	else primo=1;

	return primo;
}

int main() {
	int n;
	do{
	scanf("%d",&n);
	}while(n<1);
	
	printf("%d",primo(n));
	
	return 0;
}





