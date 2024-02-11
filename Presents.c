// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[j]==i){
				printf("%d ",j);
			}
		}
	}
	return 0;
}