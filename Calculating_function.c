// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long int n,a=0,b=0,sum1=0,sum2=0;
    scanf("%lld",&n);
    a=n/2;
    sum1=a*(a+1);
	b=(n+1)/2;
	sum2=b*b;
	printf("%lld",sum1-sum2);
	
	return 0;
}