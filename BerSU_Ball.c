#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	int a[m];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
	}
	int c=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
//			if((b[j]==a[i]) || (b[j]==a[i]-1) || (b[j]==a[i]+1))
			if(abs(a[i]-b[j])<=1){
				c++;
				b[j]=150;
				a[i]=150;
				break;
			}
		}
	}
	printf("%d",c);
	return 0;
}
	