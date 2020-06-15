//dado um valor ponto flutuante, mostrar cedulas necessárias para compor a quantia (em reais)
#include<stdio.h>
int main (){
	float valor=0,novalor=0;
	int dcem=0, decinq=0, devint=0, ddez=0, dcinco=0,ddois=0,dium=0,cinqcents=0,vntcincocent=0,dezcents=0,cincocents=0,umcent=0;
	
	scanf("%f",&valor);
	novalor = valor * 100 ;

	dcem = (int)novalor / 10000 ;
	printf("%d notas de 100.00\n",dcem);
	novalor = novalor - dcem*10000;

	decinq = (int)novalor / 5000 ;
	printf("%d notas de 50.00\n",decinq);
	novalor = novalor - decinq*5000;

	devint = (int)novalor / 2000 ;
	printf("%d notas de 20.00\n",devint);
	novalor = novalor - devint*2000;

	ddez = (int)novalor / 1000 ;
	printf("%d notas de 10.00\n",ddez);
	novalor = novalor - ddez*1000;

	dcinco = (int)novalor / 500 ;
	printf("%d notas de 05.00\n",dcinco);
	novalor = novalor - dcinco*500;

	ddois = (int)novalor / 200 ;
	printf("%d notas de 2.00\n",ddois);
	novalor = novalor - ddois*200;

	dium = (int)novalor / 100;
	printf("%d moedas de 01.00\n",dium);
	novalor = (novalor - dium*100);

	cinqcents = (int)novalor / 50;
	printf("%d moedas de 00.50\n",cinqcents);
	novalor = (novalor - cinqcents*50);

	vntcincocent = (int)novalor / 25;
	printf("%d moedas de 00.25\n",vntcincocent);
	novalor = (novalor - vntcincocent*25);

	dezcents = (int)novalor / 10;
	printf("%d moedas de 00.10\n",dezcents);
	novalor = (novalor - dezcents*10);

	cincocents = (int)novalor / 5;
	printf("%d moedas de 00.05\n",cincocents);
	novalor = (novalor - cincocents*5);

	umcent = (int)novalor / 1;
	printf("%d moedas de 00.01 \n",umcent);
	novalor = (novalor - umcent*1);

	return 0;

}
