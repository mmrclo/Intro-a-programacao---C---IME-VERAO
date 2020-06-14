//classificaçao de faixa etária 
#include <stdio.h> 
int main () {
	int i=0,npessoas=0,idade=0,fx010=0,fx1117=0,fx1830=0,fx3165=0,fx66mais=0;
	scanf("%d",&npessoas);
	for(i=0;i<npessoas;i++){
		scanf("%d",&idade);
		if(idade>=0 && idade <= 10) fx010 = fx010 + 1;
		else if(idade>=11 && idade <= 17) fx1117 = fx1117 + 1;
		else if(idade>=18 && idade <= 30) fx1830 = fx1830 + 1;
		else if(idade>=31 && idade <= 65) fx3165 = fx3165 + 1;
		else if(idade>=66) fx66mais = fx66mais + 1;
		}
	printf("\n Crianças %d",fx010);
	printf("\n Adolescentes %d",fx1117);
	printf("\n Jovens %d",fx1830);
	printf("\n Adultos %d",fx3165);
	printf("\n Idosos %d",fx66mais);
return 0;
}
		
