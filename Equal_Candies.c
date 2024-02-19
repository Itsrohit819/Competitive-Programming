#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m,sum=0;
		scanf("%d",&m);
		int a[m];
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		int min=a[0];
		for(int j=1;j<m;j++){
			if(min>a[j]){
				min=a[j];
			}
		}
		for(int j=0;j<m;j++){
			sum=sum+a[j]-min;
		}
		printf("%d\n",sum);
	}
}