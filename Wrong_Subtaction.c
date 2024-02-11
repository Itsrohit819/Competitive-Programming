#include<stdio.h>
int main(){
	long long n;
	int k;
	scanf("%lld %d",&n,&k);
	for(int i=1;i<=k;i++){
		if(n%10!=0){
			n--;
		}
		else{
			n=n/10;
		}
	}
	printf("%lld",n);
	return 0;
}