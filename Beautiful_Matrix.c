#include <stdio.h>

int main() {
    int a[5][5],x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    int count=0;
    if(x==0 || x==4){
        count=count+2;
    }
    if(x==1 || x==3){
        count++;
    }
    if(y==0 || y==4){
        count=count+2;
    }
    if(y==1 || y==3){
        count++;
    }
    printf("%d",count);
    return 0;
}