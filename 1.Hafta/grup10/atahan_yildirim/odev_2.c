#include <stdio.h>

int main()
{
    int sefer,gecici;
    int buyukDeger=1;
    int kucukDeger=1;
    printf("Fibonacci dizisinin kaç elemanýný goruntulemek istiyorsunuz: ");
    scanf("%d",&sefer);

    printf("%d ",kucukDeger);
    for(int i=0;i<sefer-1;i++){
    	printf("%d ",buyukDeger);
    	gecici=buyukDeger;
    	buyukDeger=buyukDeger+kucukDeger;
    	kucukDeger=gecici;
    }
}
