// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n==744 || n==747 || n==774 || n==777){
    	printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}