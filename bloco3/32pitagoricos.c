/* Construa um algoritmo que lê três números naturais como entradas e verifica se esses números são pitagóricos. Três números são pitagóricos se o quadrado do maior deles (hipotenusa) é igual a soma do quadrado dos outros dois. Como saída de seu programa imprimir: se pitagóricos, o valor 1 e o valor da hipotenusa ao quadrado; se não pitagórico, apenas o valor 0.

Os números são denominados pitagóricos por corresponderem a comprimentos de lados de um triângulo retângulo, ou seja, h² = a² + b².

Atenção, note que a  hipotenusa pode ser qualquer uma das três entradas,

Entrada esperada: três números naturais.

Saída esperada: o valor 1 e o quadrado da hipotenusa se pitagórico ou o valor 0 em caso contrário. */

#include <stdio.h>
int main () {
	int a=0,b=0,c=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0){
		if(a>b && a>c){
			if((a*a) == (b*b + c*c))
				printf("%d %d",1,a*a);
			else printf("%d",0);
		}
		else if(b>a && b>c){
			if((b*b) == (a*a + c*c))
				printf("%d %d",1,b*b);
			else printf("%d",0);
			}	
		else if(c>b && c > a){
			if((c*c) == (a*a + b*b))
				printf("%d %d",1,c*c);
			else printf("%d",0);
		}}
return 0;
}
