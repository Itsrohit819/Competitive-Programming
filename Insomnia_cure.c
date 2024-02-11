#include<stdio.h>
int main(){
	int k,l,m,n,x;
	scanf("%d %d %d %d",&k,&l,&m,&n);
	int d;
	scanf("%d",&d);
	for(int i=1;i<=d;i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
			x++;
		}
	}
	printf("%d",x);
	return 0;
}