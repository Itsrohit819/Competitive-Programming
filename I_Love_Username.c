#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		int m=0,o=0;
		for(int j=0;j<i;j++){
			if(a[j]>a[i]){
				m++;
			}
			if(a[j]<a[i]){
				o++;
			}
		}
		if(m==i || o==i){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
  

	
 	