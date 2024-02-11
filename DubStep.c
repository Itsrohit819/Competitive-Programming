#include<stdio.h>
int main(){
	char a[201];
	scanf("%s",a);
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;j++){
		if(a[j]=='W' && a[j+1]=='U' && a[j+2]=='B'){
			j+=2;
			
			
		}
		else{
			printf("%c",a[j]);
			if(a[j+1]=='W' && a[j+2]=='U' && a[j+3]=='B'){
				printf(" ");	
			}
		
		}
	}
	return 0;
}