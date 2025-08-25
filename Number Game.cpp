#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
    cin>>n;

    if(n==1){
        cout<<"FastestFinger\n";
        return 0;
    }
    if(n==2||n%2){
        cout<<"Ashishgup\n";
        return 0;
    }
    if((n&-n)==n){
        cout<<"FastestFinger\n";
        return 0;
    }
    if(n%4==0){
        cout<<"Ashishgup\n";
        return 0;
    }

    int x=n/2,f=1;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            f=0;
            break;
        }
    }
    if(f){
        cout<<"FastestFinger\n";
    }else{
        cout<<"Ashishgup\n";
    }
    return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
