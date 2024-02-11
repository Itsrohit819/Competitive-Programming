// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    if(n%2==0){
    	if(k>(n/2)){
    		printf("%lld",(k-(n/2))*2);
		}
		else{
			printf("%lld",(2*k-1));
		}	
	}
	else{
		if(k>((n+1)/2)){
			printf("%lld",(k-((n+1)/2))*2);
		}
		else{
			printf("%lld",(2*k-1));
		}
	}	
	
	return 0;
}