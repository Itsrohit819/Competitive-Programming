#include<stdio.h>
int main(){
    int a[4];
    for(int i=0;i<4;i++){
    	scanf("%1d",&a[i]);
	}
	a[3]=a[3]+1;
	if(a[3]==10)
	{
		a[3]=0;
		a[2]=a[2]+1;
		if(a[2]==10)
		{
			a[2]=0;
			a[1]=a[1]+1;
			if(a[1]==10)
			{
				a[1]=0;
				a[0]=a[0]+1;
			}
		}
	}
	while(a[0]==a[1] || a[0]==a[2] || a[0]==a[3] || a[1]==a[2] || a[1]==a[3] || a[2]==a[3]){		
					a[3]=a[3]+1;
	if(a[3]==10)
	{
		a[3]=0;
		a[2]=a[2]+1;
		if(a[2]==10)
		{
			a[2]=0;
			a[1]=a[1]+1;
			if(a[1]==10)
			{
				a[1]=0;
				a[0]=a[0]+1;
			}
		}
	}
		}
    printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
    return 0;
}