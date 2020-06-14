/* 9.1 Funções: Introdução ao uso de funções: somar inteiros e média

Construa duas funções de nomes soma e media que devolvem respectivamente, a soma dos parâmetros e sua média. 
As funções devem ter 2 parâmetros inteiros, (exemplo de como serão utilizadas: soma(a, b) e media(a, b) ).

Seu programa principal deverá receber do usuário 2 números inteiros, chamar com eles primeiro a funcão soma e imprimir sua soma, depois chamar a função media e imprimir sua média aritmética.

Dica 1. Sendo a e b inteiros se fizer (a+b)/2 resultará inteiro, então divida por 2.0.

Atenção: Esta é uma atividade para exercitar o conceito de funções, assim será necessário que implemente uma função que NÃO tenha comandos de entrada de dados nela (os dados tem que ser providenciados por quem a invoca). Aqui deve-se usar obrigatoriamente como nome para as funções  soma e media, sob pena de ter posteriormente diminuida sua nota na atividade. Veja essa explicação adicional.

Entrada esperada: 2 números inteiros a e b.

Saída esperada: chamando as funções soma e media, imprimir a+b e (a+b)/2.0. */

#include<stdio.h>

int soma(int a, int b) {
	int soma;
	soma = a+b;
	return soma;	
	}

float media(int a, int b) {
	float media;
	media = (a+b)/2.0;
	return media;
}


int main () {
	int a,b;

	scanf("%d %d",&a,&b);
	
	printf("%d %f",soma(a,b),media(a,b));

	return 0;

}

	

