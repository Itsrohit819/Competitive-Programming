#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m,sum=0;
		scanf("%d",&m);
		char s[m];
		scanf("%s",s);
		for(char ch='A';ch<='Z';ch++){
			int c=0;
			for(int j=0;j<m;j++){
				if(ch==s[j]){
					c++;
				}
			}
			if(c>=1){
				sum+=c+1;
			}
		}
		printf("%d\n",sum);
	}
	
}