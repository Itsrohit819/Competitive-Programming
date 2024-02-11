// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    int i=0;
    while(a[i]!='\0'){
    	if(a[i]==b[i]){
    		printf("0");
		}
		else{
			printf("1");
		}
		i++;
	}
	return 0;
}