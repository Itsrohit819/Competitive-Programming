#include<stdio.h>
int main(){
	char a[101];
	scanf("%s",a);
	int k,l,cnt=0;
//	for(int i=0;i<101;i++){
//		int flag=0;
//		for(int j=i+1;j<(i+7);j++){
//			if(a[j]==a[i]){
//				flag++;
//			}
//		}
	int i=0;
	while(a[i]!='\0'){
		k=0;
		l=0;
		int j=i;
		while(a[j]=='0'){
			k++;
			j++;
		}
		int m=i;
		while(a[m]=='1'){
			l++;
			m++;
		}
		i++;
		if(k>=7 || l>=7){
			cnt++;
		}
	}
	if(cnt>=1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}