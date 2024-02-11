#include <stdio.h>

int main() {
    int n;
    int a[100],b[100],c[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        x=x+a[i];
        y=y+b[i];
        z=z+c[i];
    }
    if(x==0&&y==0&&z==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}