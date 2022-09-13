#include <stdio.h>
int main(){
	float ilk_say , ikinci_say;
	char islem;
	printf("---HESAP MAKINESI---");
	printf("\n islemler: \n 1- Toplama (+) 2- Cikartma(-) 3- Carpma(x) 4- Bolme(/)");
	do{
		
		printf("\n Birinci sayiyi giriniz: ");
		scanf("%f", &ilk_say);
		printf("\n Ikinci sayiyi giriniz: ");
		scanf("%f", &ikinci_say);
		printf("\n Yapmak istediginiz islemi giriniz (cikmak icin e yaziniz): ");
		scanf(" %c", &islem);
	
	
		if(islem == '+'){
			
			printf("sonuc: %f",ilk_say + ikinci_say);
			
		}
		else if(islem == '-'){
			printf("sonuc: %f",ilk_say - ikinci_say);
			
		}
		else if(islem == 'x'){
			printf("sonuc: %f",ilk_say * ikinci_say);
			
		}
		else if(islem == '/'){
			printf("sonuc: %f",ilk_say / ikinci_say);
			
		}
		else if(islem == 'e'){
			printf("cikis yapiliyor...");
		}
		else{
			printf("\n gecersiz...");
		}
		system("pause");
		system("cls");
	}while(islem != 'e');
	
	
	
	
	
	return 0;
}