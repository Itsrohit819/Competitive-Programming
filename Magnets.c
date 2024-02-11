// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,c=1;
    scanf("%d",&n);
    int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<(n-1);i++){
		if(a[i]==10 && a[i+1]==01){
			c++;
		}
		if(a[i]==01 && a[i+1]==10){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}