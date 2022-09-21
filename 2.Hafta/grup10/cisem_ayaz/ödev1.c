#include <stdio.h>
int main(){
	int dizi[50],n,i,*son,*ilk,temp,j;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d", &n);
	printf("dizinin elemanlarini giriniz:");
	for (i=0;i<n;i++){
		scanf("%d", &dizi[i]);
	}
	printf("dizinin ilk hali: ");
	for (i=0;i<n;i++){
		printf("%d  ", dizi[i]);
	}
	
	
	ilk = &dizi[0];
	son = &dizi[n-1];
	while(ilk<son){
		temp = *son;
		*son= *ilk;
		*ilk= temp;
		ilk++;
		son--;
			
	}
	
	printf("dizinin ters cevrilmis hali:");
	for (i=0;i<n;i++){
		printf("%d  ", dizi[i]);
	}
	
	return 0;
}