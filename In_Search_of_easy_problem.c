// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	if(sum==0){
		printf("EASY");
	}
	else{
		printf("HARD");
	}
	return 0;
}