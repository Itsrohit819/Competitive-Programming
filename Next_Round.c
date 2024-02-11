#include<stdio.h>
int main(){
	int n,k,c=0,x=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==0){
			x=i;
			if(x<k){
				printf("%d",x);
				return 0;
				break;
		}	
		}		
}
	for(int i=0;i<n;i++){
		if(a[k-1]<=a[i]){
			c++;
		}
	}
	printf("%d",c);
	return 0;
}