#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		if((a-b)%2==0){
			printf("YES\n");
		}
		else{
			if((a-b)>2){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	
	return 0;
}
  

	
 	