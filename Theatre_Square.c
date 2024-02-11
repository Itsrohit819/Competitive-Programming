#include<stdio.h>
int main(){
	long long a,b,c,x=0,y=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	if(a==1 && b==1){
		printf("1");
		return 0;
	}
	if(a==1)
	{
		printf("%lld",(b+(b%c))/c);
		return 0;
	}
	if(b==1)
	{
		printf("%lld",(a+(a%c))/c);
		return 0;
	}
	if((a*b)<=(c*c)){
		printf("1");
		return 0;
	}
	if(c==1){
		printf("%lld",a*b);
		return 0;
	}
	x=(a+(c-(a%c))%c);
	y=(b+(c-(b%c))%c);
	printf("%lld",(x*y)/(c*c));
	return 0;
}

