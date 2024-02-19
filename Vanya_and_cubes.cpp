// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==1){
        cout << "1" << endl;
    }
    else{
        int k=1,cnt=0,sum=0;
        for(int i=1;sum<=n;i+=k){
            sum=sum+i;
            cnt++;
            k++;
        }
        cout << cnt-1 << endl;
    }
    
    return 0;
}