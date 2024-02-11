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
		for(int j=0;j<a;j++){
		    for(int k=j+1;k<a;k++){
		        if(x[j]>x[k]){
		            int temp=x[j];
		            x[j]=x[k];
		            x[k]=temp;
		        }
		    }
		}
		if(a==1){
			printf("YES\n");
		}
		else{
			for(int j=0;j<(a-1);j++){
				if(x[j+1]-x[j]>=2){
				    flag=1;
				}
			}
			if(flag==0){
			    printf("YES\n");
		    }
		    else{
			    printf("NO\n");
		    }
		}
		
	}
	return 0;
}