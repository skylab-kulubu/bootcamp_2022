#include <stdio.h>
int recur( int n,int o,int e){
	int tmp;
	static int a =0;
	if(a<e){
		printf("%d ",n);
		tmp = n;
		n = o;
		o += tmp;
		a ++;
		recur(n,o,e);
	}
}
int main(){
	int e;
	printf("fibonacci dizisinin kac elemanini siralamak istersiniz:");
	scanf("%d", &e);
	recur(0,1,e);
	
	return 0;
}

