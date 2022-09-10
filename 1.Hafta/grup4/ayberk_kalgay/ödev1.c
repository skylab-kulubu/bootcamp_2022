#include <stdio.h>
int main(){
	
	float n,j,sonuc;
	char a;
	
	
	printf("Isleme Girecek ilk sayiyi giriniz ");
	scanf("%f", &n);
	
	printf("Yapilcak islemi seciniz ");
	scanf(" %c", &a);
	
	printf("Isleme Girecek ikinci sayiyi giriniz ");
	scanf("%f", &j);
	
	if(a == '*' ){
		
		sonuc = n * j;
		
		printf("sonuc=%f",sonuc);
		
}
	
		else if(a =='+'){
			
			sonuc = n + j;
			
			printf("sonuc=%f",sonuc);
			
			}
			
			else if(a =='-'){
				
				
				sonuc = n - j;
				
				printf("sonuc=%f",sonuc);
				
				}
				
				else if(a =='/'){
					
					sonuc = n / j;
					
					printf("sonuc=%f",sonuc);
					
					}
					
					else{
						
						printf("Hatali Operator girdiniz ");
					}
					
					
	
	
	return 0;
}
