#include<stdio.h>
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a[13];
		scanf("%s",a);
		if(a[0]=='T'){
			cnt+=4;
		}
		if(a[0]=='C'){
			cnt+=6;
		}
		if(a[0]=='O'){
			cnt+=8;
		}
		if(a[0]=='D'){
			cnt+=12;
		}
		if(a[0]=='I'){
			cnt+=20;
		}
		
	}
	printf("%d",cnt);
	return 0;
}