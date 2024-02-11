// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
	int a[n];	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		printf("%d ",a[i]);
	}
	
	return 0;
}