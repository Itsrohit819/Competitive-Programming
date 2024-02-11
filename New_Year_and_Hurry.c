#include<stdio.h>
int main(){
	int a,b,n=0,i;
	scanf("%d %d",&a,&b);
	b=240-b;
	for(i=1;i<=a;i++){
		n=n+5*i;
		if(n==b){
			printf("%d",i);
			return 0;
		}
		if(n>b){
			break;
		}
	}
	printf("%d",i-1);
	return 0;
}