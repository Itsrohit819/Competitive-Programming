#include<stdio.h>
int main()
{
	int n,sum=0,b=0,c=0,d=0,e=0,f,g,k=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==4){
			b++;
		}
		if(a[i]==3){
			c++;
		}
		if(a[i]==2){
			d++;
		}
		if(a[i]==1){
			e++;
		}
	}
	if(d%2==0){
		f=d/2;
	}	
	else{
		f=d/2;
		sum=sum+2;
	}
	if(e==0){
		k=c;
	}
	if(c==0){
		sum=sum+e;
	}
	
	if(e!=0 && c!=0){
		if(c==e){
			b=b+c;
		}
		else if(c>e)
		{
			b=b+c;
		}	
		else{
			b=b+c;
			sum=sum+(e-c);
		}
	}
		
	sum=sum+3;
	g=sum/4;
	printf("%d",g+b+k+f);
	return 0;
}