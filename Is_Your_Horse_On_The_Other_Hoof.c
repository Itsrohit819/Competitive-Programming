// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long int a[4];
    int x=0;
    for(int i=0;i<4;i++){
    	scanf("%lld",&a[i]);
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]==a[j]){
				x++;
				break;
			}
		}
	}
	printf("%d",x);
	return 0;
}