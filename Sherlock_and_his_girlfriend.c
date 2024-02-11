#include<stdio.h>
#include<math.h>
int isprime(int x){
	int flag=0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			flag++;
			return 0;
		}
	}
	if(flag==0){
		return 1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
	    printf("1\n1");
	    return 0;
	}
	if(n==2){
	    printf("1\n1 1");
	    return 0;
	}
	printf("2\n");
	for(int i=2;i<=(n+1);i++){
//		for(int j=2;j<i;j++){
//			if(i%j==0 && isprime(j)){
//				clr++;
//			}
//		}
//		for(int k=i-3;k<(i-1);k++){
//			if(i%a[i]==0){
//				
//			}
//		}
//		
//		a[i-2]=clr;
//		b=clr;
//	}
//	printf("%d\n",b);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
		if(isprime(i)){
			printf("1 ");
		}
		else{
			printf("2 ");
		}
	}
	return 0;
}
  

	
 	