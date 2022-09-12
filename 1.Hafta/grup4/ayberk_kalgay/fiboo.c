#include <stdio.h>

int main(){

    int a,ilk_sayi=0,ikinci_sayi=1,i,tmp;

    printf("Sira sayisini yaziniz: ");
    scanf("%d", &a);

    if (a>0){
    	
		
		for(i=0;i<a;i++){


        printf("%d\ ", ilk_sayi);
        tmp=ilk_sayi;
        ilk_sayi=ikinci_sayi;
        ikinci_sayi+=tmp;
		
		
		
		
		
    	
    	
    	
    	
        
        }
        
    	
		
	}
	else{
    		printf("Hatali tuslama yaptiniz.");
		}
    	







    return 0;
}
