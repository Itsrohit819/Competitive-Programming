#include<stdio.h>
#include<math.h>
int main(){
	int n,a,sum=0;
	scanf("%d %d",&n,&a);
	for(int i=1;i<=n;i++){
		int b;
		scanf("%d",&b);
		if(b<=a){
			sum=sum+1;
		}
		else{
			sum=sum+2;
		}
	}
	printf("%d",sum);
	return 0;
}
  

	
 	