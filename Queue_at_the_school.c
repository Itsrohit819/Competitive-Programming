#include<stdio.h>
int main(){
    int n,t;
    char temp;
    scanf("%d %d",&n,&t);
    char a[200];
    scanf("%s",a);
    for(int j=0;j<t;j++){
        for(int i=0;i<=n;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                i++;
            }
        }
    }
    printf("%s", a);
    return 0;
}