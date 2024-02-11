#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char st[100];
		scanf("%s",&st);
		int i=0;
		while(st[i]!='\0'){
			i++;
		}
		if(i>10){
			printf("%c%d%c\n",st[0],i-2,st[i-1]);
		}
		else{
			printf("%s\n",st);
		}
	}
	return 0;
}