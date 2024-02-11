// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,x=0,sum1=0;
    scanf("%d",&n);
    int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j]) 
            {	
            	int x =  a[i];
                a[i] = a[j];
                a[j] = x;
            }
 		}
 	}
 	for(int i=0;i<n;i++){
 		sum1=sum1+a[i];
 		int sum2=0;
		for(int j=i+1;j<n;j++){
			sum2=sum2+a[j];
		} 	
		if(sum1>sum2){
			printf("%d",i+1);
			return 0;
		}
	}	
	return 0;
}