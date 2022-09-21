#include <stdio.h>
int main()
{
	int sayi1,sayi2,sonuc;
	char islem;
	printf("HESAP MAKINESI \n");
	printf("Toplama islemi icin: +\nCikarma islemi icin: - \nBolmek icin: / \nCarpmak icin : * \n");
	scanf("%c",&islem);
	printf("Birinci sayi: ");
	scanf("%d",&sayi1);
	printf("Ýkinci sayi : ");
	scanf("%d",&sayi2);
	switch(islem){
	    case '+':
	    sonuc = sayi1 + sayi2;
		printf("sonuc = %d \n",sonuc);
	    break;

	    case '-':
	    sonuc = sayi1 - sayi2;
		printf("sonuc = %d \n",sonuc);
	    break;

	    case '*':
	    sonuc = sayi1 * sayi2;
		printf("sonuc = %d \n",sonuc);
	    break;

	    case '/':
	    sonuc = sayi1 / sayi2;
		printf("sonuc = %d \n",sonuc);
	    break;}
}
