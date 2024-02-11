#include<stdio.h>
int main(){
	int n,x=0,m=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=a[0],k=a[0];
	for (int i=0;i<n;i++){
        if(a[i]<l){
        	l=a[i];	
		}   
 	}
 	for(int i=0;i<n;i++){
 		if(a[i]>k){
        	k=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==k){
			x=x+i;
			m=i;
			break;
		}
	}
	for(int i=(n-1);i>=0;i--){
		if(a[i]==l){
			if(i<m){
				x=x+(n-i-1)-1;
			}
			else{
				x=x+(n-i-1);
			}
			break;	
		}
	}
	printf("%d",x);
	return 0;
}