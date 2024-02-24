#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long m,sum=0,max=0;
    
    cin >> n >> m ;
    
    long long int a[n];
    
    for(int i=0; i<n;i++) {
        cin >> a[i];
    }

    int x = 0;
    
    for(int i=0;i<n;i++) {
        sum =sum +a[i];
        while(sum>m) {
            sum =sum-a[x];
            x=x+1;
        }
        if(max<(i-x+1)){
        	max=i-x+1;
		}
    }

    cout << max;

    return 0;
}