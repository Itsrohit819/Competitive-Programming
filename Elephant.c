#include<stdio.h>
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	while(n>=5){
		n=n-5;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
		}
	while(n>=4){
		n=n-4;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
		}
	while(n>=3){
		n=n-3;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
	}
	while(n>=2){
		n=n-2;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
	}
	if(n==0){
		printf("%d",cnt);
	}
	else{
		printf("%d",cnt+n);
	}
	return 0;
}

