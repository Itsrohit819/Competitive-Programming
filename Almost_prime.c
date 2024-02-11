#include<stdio.h>
#include<math.h>
int isprime(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,a=0;
	scanf("%d",&n);
	for(int i=6;i<=n;i++){
		int x=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0&&isprime(j)){
				x++;
			}
		}
		if(x==2){
			a++;
		}
	}
	printf("%d",a);
	return 0;
}