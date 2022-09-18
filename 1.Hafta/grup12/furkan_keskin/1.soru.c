#include <stdio.h>  
float hesap(float a,float b,char c){
	float x;
	if (c=='+')
		x= a+b;
	else if (c=='-')
		x= a-b;
	else if (c=='*')
		x= a*b;
	else if (c=='/')
		x= a/b;
	return x;
}
int main()  
{  
    char opt;  
    int n1, n2;   
    float res;  
    printf (" islem giriniz (+, -, *, /) : ");  
    scanf ("%c", &opt);
    printf (" \n ilk sayiyi giriniz: ");  
    scanf(" %d", &n1); 
    printf (" ikinci sayiyi giriniz: ");  
    scanf (" %d", &n2); 
    printf("sonuc :%f",hesap(n1,n2,opt));
    return 0;
}
