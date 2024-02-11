#include<stdio.h>
int main(){
	long long n,i=0,flag=0;
	scanf("%lld",&n);
	while(n!=0){
		i=n%10;
		n=n/10;
		if(i==7 || i==4){
			flag++;
		}
	}
	if(flag==4 || flag==7){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}