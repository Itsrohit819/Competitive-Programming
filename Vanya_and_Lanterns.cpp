#include<stdio.h>
int main(){
	int n;
	double m;
	scanf("%d %lf",&n,&m);
	int a[n];
	double sum,k,l,avg=0.0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	k=a[0]-0.0;
	l=m-a[n-1];
	for(int i=0;i<(n-1);i++){
		sum=(a[i+1]-a[i])/2.0;
		if(sum>=avg){
			avg=sum;
		}
	}
	if(k>=l){
		if(k>=avg){
			printf("%lf",k);
		}
		else{
			printf("%lf",avg);
		}
	}
	else{
		if(l<=avg){
			printf("%lf",avg);
		}
		else{
			printf("%lf",l);
		}
	}
	
	return 0;
}