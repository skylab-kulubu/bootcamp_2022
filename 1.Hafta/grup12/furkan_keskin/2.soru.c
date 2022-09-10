#include<stdio.h>
int main()
{
    int n,a=1,b=1,c,i;
    printf("sayi giriniz: ");
    scanf("%d", &n);
    printf("%d ",a);
    printf("%d ",b);
    for (i=2;i<n;i++){
    	c=b;
    	b=a+b;
    	a=c;
    	printf("%d ",b);
	}
    	
    return 0;
}
