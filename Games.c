#include<stdio.h>
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}