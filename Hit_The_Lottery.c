#include<stdio.h>
int main(){
	long long n;
	int cnt=0;
	scanf("%lld",&n);
	while(n>=100){
		n=n-100;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
		}
	while(n>=20){
		n=n-20;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
		}
	while(n>=10){
		n=n-10;
		cnt++;
		if(n==0){
			printf("%d",cnt);
			return 0;
		}
	}
	while(n>=5){
		n=n-5;
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