#include<stdio.h>
int main(){
	char a[101],b[101];
	int sum1=0,sum2=0;
	scanf("%s %s",a,b);
	int i=0;
	while(a[i]!='\0'){
		if((a[i]>='A') && (a[i]<='Z')){
			a[i]=a[i]+32;
		}
		if((b[i]>='A') && (b[i]<='Z')){
			b[i]=b[i]+32;
		}
		i++;
	}
	for(int j=0;j<i;j++){
		if(a[j]!=b[j]){
			sum1=sum1+a[j];
			sum2=sum2+b[j];
			break;
		}
		
	}
	if(sum1<sum2){
		printf("-1");
	}
	else if(sum1>sum2){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

