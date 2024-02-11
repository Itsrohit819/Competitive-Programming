#include<stdio.h>
int main(){
	char c[1000];
	scanf("%s",&c);
	if(c[0]>=97 && c[0]<=122){
		c[0]=c[0]-32;
	}
	printf("%s",c);
	return 0;
}