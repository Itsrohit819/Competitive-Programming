#include<stdio.h>
int main(){
	int n,a,b,cnt=0;;
	scanf("%d %d",&n,&a);
	int x[a];
	for(int i=0;i<a;i++){
		scanf("%d",&x[i]);
	}
	scanf("%d",&b);
	int y[b];
	for(int i=0;i<b;i++){
		scanf("%d",&y[i]);
	}
	for(int i=1;i<=n;i++){
		int flag1=0;
		for(int j=0;j<a;j++){
			if(i==x[j]){
				flag1++;
				break;
			}
		}
		if(flag1>=1){
			cnt++;
		}
		else{
			int flag2=0;
			for(int k=0;k<b;k++){
				if(i==y[k]){
					flag2++;
					break;
				}
			}
			if(flag2>=1){
				cnt++;
			}
		}
		
	}
	if(cnt==n){
		printf("I become the guy.");
	}
	else{
		printf("Oh, my keyboard!");
	}
	return 0;
}