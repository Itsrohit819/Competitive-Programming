#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++)
	{
		int n,cnt1=0,cnt2=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%2==1){
				cnt1++;
			}
			else{
				cnt2++;
			}
		}
		if((cnt1>0 && cnt2>0) || (cnt1%2==1)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}