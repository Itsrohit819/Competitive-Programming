#include<stdio.h>
int main(){
	int a,b,c,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=c;i++){
		sum=sum+(i*a);
	}
	if(sum<=b){
		printf("0");
	}
	else{
	printf("%d",sum-b);}
	return 0;
}