#include<stdio.h>
int main(){
	char a[101],b[101],c[101];
	int flag=0;
	scanf("%s %s",a,b);
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;j++){
		c[j]=a[i-j-1];
	}	
	for(int j=0;j<i;j++){
		if(b[j]!=c[j]){
			flag++;
		}
	}
	if(flag==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}