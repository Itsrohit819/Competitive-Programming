#include<stdio.h>
int main(){
	int n,sum=0,m=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	sum=b[0];
	for(int i=0;i<n;i++){
		m=m+b[i]-a[i];
		if(m>sum){
			sum=m;
		}
	}
	printf("%d",sum);
	return 0;
}