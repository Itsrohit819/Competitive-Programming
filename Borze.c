#include<stdio.h>
void main()
{
	char a[200];
	scanf("%s",&a);
//	for(int i=0;;i++)
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]=='.')
		{
			printf("0");
		}
		else
		{
			if(a[i+1]=='.')
			{
				printf("1");
			}
			else
			{
			printf("2");
		}
		i++;

		}
		i++;
	}

}