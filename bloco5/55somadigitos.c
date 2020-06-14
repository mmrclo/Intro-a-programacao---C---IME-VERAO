/* 5.5 Laço simples: Dado um numero decimal N, determinar a soma de seus dígitos

Construa um programa que solicita que o usuário digite um inteiro positivo N e cuja saída seja a soma dos dígitos do número N. Lembre-se que a divisão entre inteiros devolve inteiro e que para pegar o resto deve-se usar o operador binário % (ou seja, para a e b variáveis inteiras, se a=19 e b=4, então a/b resulta 4 e a%b resulta 3.

Exemplos. Considere as seguintes entradas e respectivas saídas.

Entradas                                    Saídas
    1                                         1
    9                                         9
    33                                        6
    48                                        12
    10006                                     7
    50645                                     20

Atencão Python: No Python 3, a divisão inteira é obtida com o operador especial //, ou seja, para pegar o quociente de 5 por 2 deve-se fazer algo como quoc = 5 // 2. Entretanto, ao inserir sua solucão no SAW, comente a linha (# quoc = 5 // 2.), faca uma cópia dela e troque as duas barras por barra simples! Ou seja, no SAW use: quoc = 5 / 2.

Entrada esperada: um inteiro positivo N.

Saída esperada: um inteiro positivo correspondente à soma dos dígitos de N. */

#include<stdio.h>
int main () {
	int N=0,soma=0;
	scanf("%d",&N);
	while(N!=0){
		soma = soma + N%10;
		N = N / 10;
	}
	printf("%d",soma);
return 0;
}












