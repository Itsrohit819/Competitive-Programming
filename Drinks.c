// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
	float sum=0;
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	sum=sum+a[i];
	}
	printf("%f",sum/n);
	
	return 0;
}