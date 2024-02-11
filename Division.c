// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a<=1399){
			printf("Division 4\n");
		}
		else if(a>=1400 && a<=1599){
			printf("Division 3\n");
		}
		else if(a>=1600 && a<=1899){
			printf("Division 2\n");
		}
		else{
			printf("Division 1\n");
		}
	}
	return 0;
}