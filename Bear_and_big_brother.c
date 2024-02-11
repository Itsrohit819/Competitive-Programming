#include<stdio.h>
int main(){
	int a,b,i=0;
	scanf("%d %d",&a,&b);
	if(b==1){
		printf("1");
		return 0;
	}
	else{
		while(a<=b){
			a=a*3;
			b=b*2;
			i++;
		}
	}
	printf("%d",i);
	return 0;
}