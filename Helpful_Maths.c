#include<stdio.h>
int main(){
	char a[101],b[103];
	scanf("%s",a);
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;j+=2){
		for(int k=j+2;k<i;k+=2){
			if(a[j]>a[k]){
				int temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		}
	}
	printf("%s",a);
	return 0;
}