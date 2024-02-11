#include<stdio.h>
int main(){
	int n,sum=0,x=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	int i=0;
//	while(a[i]==(-1)){
//		i++;
//		x++;
//	}
	for(int k=0;k<n;k++){
		sum=sum+a[k];
		if(sum<0 && a[k]==(-1)){
			sum=0;
			x++;
		}
	}
	printf("%d",x);
	return 0;
}