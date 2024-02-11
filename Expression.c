#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int sum=a*b*c;
	if((a+b*c)>sum){
		sum=a+b*c;
	}
	if((a*(b+c))>sum){
		sum=a*(b+c);
	}
	if(((a+b)*c)>sum){
		sum=(a+b)*c;
	}
	if((a*b+c)>sum){
		sum=a*b+c;
	}
	if((a+b+c)>sum){
		sum=a+b+c;
	}
//	if(((a+c)*b)>sum){
//		sum=(a+c)*b;
//	}
//	if((a*c+b)>sum){
//		sum=a*c+b;
//	}
	printf("%d",sum);
	return 0;
}
  

	
 	