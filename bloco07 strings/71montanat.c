/* 7.1 Fazer um programa em C para ler uma "frase" (caracteres digitados, sem brancos, até um ENTER), agrupando aqueles que são dígitos em um vetor de caracteres e, ao final, gerar seu correspondente numérico (no caso da linguagem C, usar uma variável do tipo long). Ignorar outros caracteres (inclusive eventual sinal de menos).
Imprimir ao final: supondo que digite-se uma palavra com k dígitos:
<digito0><digito1><digito2>...<digitok>
<digito0> ::   <codigo ASCII de digito0>
<digito1> ::   <codigo ASCII de digito1>
<digito2> ::   <codigo ASCII de digito2>
...
<digitok> ::   <codigo ASCII de digitok>

Se o primeiro dígito da palavra for '0', não deverá ser mostrado este dígito na impressão da palavra como um todo (vide exemplo abaixo).

Exemplo: Supondo como entrada a cadeia de caracteres "N0a1d2a3", deve-se obter:
123
0 :: 48
1 :: 49
2 :: 50
3 :: 51

Lembre-se que cada caractere tem um código ASCII específico.

Dicas para C: Utilizar a biblioteca #include <string.h> que dispõe da função strlen(varc) que devolve o número de caracteres na string (cadeia de caracteres) de nome varc (e.g. char varc[30]). Para ler/imprimir usar: scanf("%s", varc); prinf("%s\n", varc);. Lembre-se que uma variável inteira pode ser tratada como caractere e vice-versa (e.g. o código "char c='A'; printf("%d", c);" imprime o código correspondente, no padrão ASCII, ao caractere armazenado na variável c - no caso 'A' que é o 65).

Entrada esperada: uma string (sequência de caracteres sem separadores finalizado por ENTER).

Saída esperada: imprimir o inteiro correspondente e os dígitos na ordem que foram digitados (com seu código ASCII, o separador "::" e o dígito). */

#include<stdio.h>
#include<string.h>
int main () {
	int i=0,j=0,numeros[100],n=0,intco=0,mult=1;
	char frase[100];
	for(i=0;i<100;i++){
		numeros[i] = 0;
	}

	i=0;
	scanf(" %s",frase);
	n=strlen(frase);
	for(i=0;i<n;i++){
		if((int)frase[i]>=48 && (int)frase[i]<=57){
			numeros[j]=(int)(frase[i])-48;
			j++;
		}
	}
	
	for(i=j-1;i>=0;i--){
		intco= intco + (numeros[i])*mult;
		mult = mult*10;
	}

		
	printf("%d",intco);

	for(i=0;i<j;i++){
		printf("\n %d :: %d ",numeros[i],(numeros[i]+48));
		}
return 0;
}
	






























