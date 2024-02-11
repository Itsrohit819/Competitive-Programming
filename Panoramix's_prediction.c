#include<stdio.h>
#include<math.h>
int temp;
int i,res;
int isprime(int x){
for(int j=2;j<=sqrt(x);j++){
        if(x%j==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for( i=n+1;i<=m;i++){
        if(isprime(i)){
         res=i;
         break;
        }
    }
        if( res==m){
             printf("YES");
        }
        else 
            printf("NO");

}