#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		long long a;
		scanf("%lld",&a);
		printf("%lld\n",(a-1)/2);
			
	}
	return 0;
}