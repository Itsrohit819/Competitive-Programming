#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		int x[a];
		if((a/2)%2==0){
			printf("YES\n");
			for(int j=1;j<=(a/2);j++){
				x[j-1]=j*2;
				x[j+(a/2)-1]=j*2-1;
			}
			x[a-1]=x[a-1]+a/2;
			for(int k=0;k<a;k++){
				printf("%d ",x[k]);
			}
		}
		else{
			printf("NO\n");
		}
		
	}
	return 0;
}
  

	
 	