/* 
4.4 Testar se caractere é letra, se minúscula ou se maiúscula

Fazer um programa em C ou Python (de acordo com sua turma) que testa se caracteres digitados são letras, se são minúsculas ou se maiúsculas. O programa deve interromper sua execução quando for digitado o caractere zero (0). Para cada caractere digitado, se ele não for letra imprimir -1, se for letra minúscula imprimir 1 e se for maiúscula imprimir 2.

Pode supor que os caracteres digitados, quando forem letras, todos eles serão letras SEM acento.

Atencão: Todos devem fazer este exercício, mas existem particularidades para alunos de C e de Python. Em C, é necessário usar espaço em branco antes do formatador de caractere no scanf para caracteres (algo como scanf(" %c", &c);). Em Python versão 2 deve-se utilizar o c=raw_input() para ler um caractere (e armazenar na variável c) - no Python 3 é o próprio input().

Entrada esperada: caracteres até que seja digitado 0 (caractere zero) ou '\n'.

Saída esperada: imprimir -1 (se não letra), 1 se se for letra minúscula e 2 se letra maiúscula. */

#include<stdio.h>
int main () {
	char c;
	do{
		scanf(" %c",&c);
		if(c=='\n') c = '0';
		else if((int)c >= 65 && (int)c <= 90) printf("%d ",2);
		else if((int)c >=97 && (int)c <= 122) printf("%d ",1);
		else printf("%d ",-1); 
	} while(c!='0');
return 0;
}
	
