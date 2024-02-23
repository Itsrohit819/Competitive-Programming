#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	for(int j=0;j<m;j++){
		int n;
		scanf("%d",&n);
		char a[n];
		scanf("%s",a);
		char max=a[0];
		for(int i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		printf("%d\n",max-96);
	}
}