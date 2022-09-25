#include<stdio.h>
int main(){
	
	int arr[50];
	int n,tmp;
	int i,*ptr1,*ptr2;
	
	printf("Dizinin eleman sayisini giriniz:\t");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		
	printf("Dizinin %d.elemanini giriniz:", i+1);
	scanf("%d", &arr[i]);	
		
	}
	

	
	ptr1 = arr;
	ptr2 = &arr[n-1];
	
		while (ptr1<ptr2){
			tmp=*ptr2;
			*ptr2=*ptr1;
			*ptr1=tmp;
			ptr1++;
			ptr2--;
		}
		
			

	for(i=0;i<n;i++){
		
	printf("%d", arr[i]);	
		
	}
	
	
	return 0;
}
