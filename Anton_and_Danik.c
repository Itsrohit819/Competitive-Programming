#include<stdio.h>
int main(){
	int n,dan=0,ant=0;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(int i=0;i<n;i++){
		if(a[i]=='D'){
			dan++;
		}
		else{
			ant++;
		}
	}
	if(dan>ant){
		printf("Danik");
	}
	else if(dan<ant){
		printf("Anton");
	}
	else{
		printf("Friendship");
	}
	return 0;
}