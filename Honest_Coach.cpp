#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    for(int i=0;i<p;i++){
        int n,sum=1000;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]>a[k]){
                    int tmp=a[j];
                    a[j]=a[k];
                    a[k]=tmp;
                }
            }
        }
        
        for(int j=1;j<n;j++){
            if(sum>(a[j]-a[j-1])){
                sum=a[j]-a[j-1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}