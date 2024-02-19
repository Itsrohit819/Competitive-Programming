#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		int c=0;
		scanf("%d",&a);
		char s[a];
		scanf("%s",s);
		for(int j=0;j<a;j++){
			if(s[j]=='T' || s[j]=='i' || s[j]=='m' || s[j]=='u' || s[j]=='r'){
				c++;
				s[j]='R';
			}
		}
		if(c==5 && a==5){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}