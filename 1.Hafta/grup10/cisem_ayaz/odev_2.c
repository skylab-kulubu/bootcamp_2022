#include <stdio.h>
int main(){
	int n,ilk_say=0,ikinci_say=1,i,tmp;
	printf("kac eleman siralamak istediginizi giriniz:");
	scanf("%d",&n);
	if(n>0){
		
		for(i=0; i<n; i++){
			printf("%d ",ilk_say);
			tmp= ilk_say;
			ilk_say = ikinci_say;
			ikinci_say += tmp;
		}
	}
	
	
	
	
	
	
	
	return 0;
}


