#include<stdio.h>
int main(){
	int n,m,k,l,avg=100000;
	scanf("%d %d",&n,&m);
	int a[m];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<=(m-n+1);i++){
		int sum=a[i+n-1]-a[i];
		if(sum<avg){
			avg=sum;
			k=i;
			l=i+n-1;
		}
		
	}
	printf("%d",a[l]-a[k]);
	
	return 0;
}