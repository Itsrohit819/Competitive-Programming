#include<stdio.h>
int main(){
	char a[101];
	int cnt=0;
	scanf("%s",a);
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	for(int j=0;j<i;j++){
		int c=0;
		for(int k=j;k<i;k++){
			if(a[j]==a[k]){
				c++;
			}
		}
		if(c==1){
			cnt++;
		}
	}
	if((cnt%2)==0){
		printf("CHAT WITH HER!");
	}
	else{
		printf("IGNORE HIM!");
	}
	return 0;
}

