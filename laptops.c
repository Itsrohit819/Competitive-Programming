#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n-1;i++){
		if((a[i] < a[i+1]) && (b[i]>b[i+1])){
			printf("Happy Alex");
			return 0;
		}
	}
	printf("Poor Alex");
	return 0;
}