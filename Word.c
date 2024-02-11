#include<stdio.h>
int main()
{
	char a[100];
	int c=0,b=0;
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			c++;
		}
		else
		{
			b++;
		}
	
		i++;

	
}
	int j=0;
	while(a[j]!='\0')
	{
			if(c>b)
		{
			if(a[j]>='a'&&a[j]<='z')
			{
				a[j]=a[j]-32;
			}
		}
		else
		{
			if(a[j]>='A'&&a[j]<='Z')
			{
				a[j]=a[j]+32;
			}
		}
		j++;
	}
printf("%s",a);
	return 0;
}