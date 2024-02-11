#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,flag=0;
		scanf("%d",&a);
		int x[a];
		for(int j=0;j<a;j++){
			scanf("%d",&x[j]);
		}
		if(a==1){
			printf("1 1\n");
		}
		else{
			int max=x[0],min=x[0],k=0,l=0;
			for(int j=1;j<a;j++){
				if(max<x[j]){
					max=x[j];
					k=j;
				}
				if(min>x[j]){
					min=x[j];
					l=j;
				}
			}
			printf("%d %d\n",l+1,k+1);
		}
	}
	return 0;
}