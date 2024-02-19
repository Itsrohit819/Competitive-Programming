#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a[3],d;
		scanf("%d %d %d %d",&a[0],&a[1],&a[2],&d);
		for(int j=0;j<3;j++){
			for(int k=j+1;k<3;k++){
				if(a[j]<a[k]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		if((a[0]+a[1]+a[2]+d)%3==0 && (abs(a[0]-a[1])+abs(a[0]-a[2])<=d)){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
}
return 0;
}