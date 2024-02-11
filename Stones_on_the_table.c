#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",&a);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i+1]==a[i]){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}