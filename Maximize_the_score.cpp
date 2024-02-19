#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    for(int i=0;i<p;i++){
        int n,sum=0;
        cin >> n;
        int a[n*2];
        for(int j=0;j<n*2;j++){
            cin >> a[j];
        }
        for(int j=0;j<(n*2);j++){
            for(int k=j+1;k<(n*2);k++){
                if(a[j]>a[k]){
                    int temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(int j=0;j<(n*2-1);j+=2){
            if(a[j]<=a[j+1]){
                sum=sum+a[j];
            }
            else{
                sum=sum+a[j+1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}