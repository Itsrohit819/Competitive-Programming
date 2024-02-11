#include<stdio.h>
int main(){
	int n,x=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		char a[4];
	
		scanf("%s",a);
		
		if(a[1]=='+'){
			x++;
		}
		else{
			x--;
		}
	}
	printf("%d",x);
	return 0;
}

