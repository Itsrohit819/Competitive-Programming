// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[100];
    scanf("%s",&a);
    int i=0,flag=0;
    while(a[i]!='\0'){
    	if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){
    		flag++;
		}
		i++;
	}
	if(flag==0){
		printf("NO");
	}
	else{
		printf("YES");
	}
	
	return 0;
}