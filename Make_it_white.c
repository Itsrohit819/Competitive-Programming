#include<stdio.h>
int main(){
	int n,k,l;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		char s[11];
		scanf("%d %s",&a,s);
		if(a==1 && s[0]=='W'){
			printf("0");
			return 0;
		}
		for(int i=0;i<a;i++){
			if(s[i]=='B'){
				k=i;
				break;
			}
		}
		for(int i=(a-1);i>=0;i--){
			if(s[i]=='B'){
				l=i;
				break;
			}
		}
		printf("%d\n",l-k+1);
	}
	return 0;
}