#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==1){
		printf("-1");
	}
	else{
		printf("2 1 ");
		for(int i=3;i<n;i+=2){
			printf("%d %d ",i+1,i);
		}
	}
	return 0;
}