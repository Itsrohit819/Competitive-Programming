#include<stdio.h>
int main(){
	char a[101];
	scanf("%s",a);
	int i=0,cnt=0,flag;
	while(a[i]!='\0'){
		i++;
	}
	if(a[0]>=65 && a[0]<=90){
		flag=0;
		for(int j=1;j<i;j++){
			if(a[j]>=97 && a[j]<=122){
				flag=1;
			}
		}
		if(flag==0){
			cnt++;
		}
	}
	else{
		flag=0;
		for(int j=1;j<i;j++){
			if(a[j]>=97 && a[j]<=122){
				flag=1;
			}
		}
		if(flag==0){
			cnt++;
		}
	}
	if(cnt==0){
		printf("%s",a);
		return 0;
	}
	else{
		for(int j=0;j<i;j++){
			if(a[j]>=65 && a[j]<=90){
				a[j]=a[j]+32;
			}
			else if(a[j]>=97 && a[j]<=122){
				a[j]=a[j]-32;
			}
			else{
				a[j]=a[j];
			}
		}
	
	}
	printf("%s",a);
	return 0;
}