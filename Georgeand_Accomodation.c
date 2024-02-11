// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	int a,b;
    	scanf("%d %d",&a,&b);
    	if((b-a)>=2){
    		x++;
		}
	}
	printf("%d",x);
	return 0;
}