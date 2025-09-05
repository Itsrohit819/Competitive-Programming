#include <bits/stdc++.h>
#define int long long
using namespace std;

int ask(int x, int y) {
    cout<<"? "<<x<<" "<<y<<endl;
    int ans;
    cin >> ans;
    return ans;
}

int solve(){
	int n, m;
    cin>>n>>m;
    int a = ask(1, 1); 

    int xd1 = max(1LL, a + 2 - m);
	int yd1 = a + 2 - xd1;
    int yd2 = max(1LL, a + 2 - n);
	int xd2 = a + 2 - yd2;
    int ad1 = ask(xd1, yd1);
    int ad2 = ask(xd2, yd2);
        
	if(ad1 == 0) {
        cout << "! " << xd1 << " " << yd1 << endl;
        return 0;
    }
    if(ad2 == 0) {
        cout << "! " << xd2 << " " << yd2 << endl;
        return 0;
    }
    
    //* calculate the coordinates of the points based on their distance from the given endpoints of diagonal
    int xp1 = xd1 + (ad1 / 2);
	int yp1 = yd1 - (ad1 / 2);
    int xp2 = xd2 - (ad2 / 2);
	int yp2 = yd2 + (ad2 / 2);

    //* atleast one of them should return 0 distance when queried
    if(ask(xp1, yp1) == 0) {
        cout << "! " << xp1 << " " << yp1 << endl;
    }
    else {
        cout << "! " << xp2 << " " << yp2 << endl;
    }
    return 0;
}

signed main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}