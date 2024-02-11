#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]%2==0){
		if(a[1]%2==0){
			for(int i=2;i<n;i++){
				if(a[i]%2!=0){
					printf("%d",i+1);
					return 0;
				}
			}
		}
		else{
			if(a[2]%2==0){
				printf("2");
			}
			else{
				printf("1");
			}
		}
	}
	else{
		if(a[1]%2!=0){
			for(int i=2;i<n;i++){
				if(a[i]%2==0){
					printf("%d",i+1);
					return 0;
				}
			}
		}
		else{
			if(a[2]%2!=0){
				printf("2");
			}
			else{
				printf("1");
			}
		}
	}
	return 0;
}