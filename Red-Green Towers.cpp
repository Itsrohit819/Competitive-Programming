#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1000000007;

int solve()
{
    int r, g;
    cin >> r >> g;
    int s = r + g;
    int h = 0;
    int t = 0;
    for(int i=1; ;i++)
    {
        if(t+i <= s)
        {
            t += i;
            h = i;
        }
        else
        {
            break;
        }
    }
    vector<int> dp(r+1, 0);
    dp[0] = 1;
    for(int i=1;i<=h;i++)
    {
        for(int j=r;j>=i;j--)
        {
            dp[j] = (dp[j] + dp[j-i]) % M;
        }
    }
    int ans = 0;
    for(int j=0;j<=r;j++)
    {
        int gr = t - j;
        if(gr >= 0 && gr <= g)
        {
            ans = (ans + dp[j]) % M;
        }
    }
    cout << ans << "\n";
    return 0;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t=1;
	//cin >> t;
	while(t--){
	    solve();
	}
}
