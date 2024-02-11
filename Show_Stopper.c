#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,flag=0;
		scanf("%d",&a);
		int x[a],y[a];
		for(int j=0;j<a;j++){
			scanf("%d",&x[j]);
		}
		for(int j=0;j<a;j++){
			scanf("%d",&y[j]);
		}
		if(a==1){
			printf("YES\n");
		}
		else{
			for(int j=0;j<a;j++){
			    if(y[j]<x[j]){
			    	int temp=x[j];
			    	x[j]=y[j];
		    		y[j]=temp;
				}
			}
			int maxa=x[0],maxy=y[0],k=0,l=0;
			for(int j=1;j<a;j++){
				if(maxa<=x[j]){
					maxa=x[j];
					k=j;
				}
				if(maxy<=y[j]){
					maxy=y[j];
					l=j;
				}
			}
			if(k==(a-1) && l==(a-1)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}