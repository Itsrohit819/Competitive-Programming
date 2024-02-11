#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i%4==0){
			printf("a");
		}
		else if((i-1)%4==0){
			printf("b");
		}
		else if((i+2)%4==0){
			printf("c");
		}
		else
		{
			printf("d");
		}
	}
	return 0;
}