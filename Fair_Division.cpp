// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    for(int j=0;j<p;j++){
        int n,cnt=0,cnt2=0,sum=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                cnt++;
            }
            else{
                cnt2++;
            }
            sum=sum+a[i];
        }
        if(sum%2==1){
            cout << "NO" << endl;
        }
        else{
            if(cnt>=2 || cnt2%2==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}