#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,c;
		cin >> a >> c;
		if((a%2==0&&c%2==0)||(a%2==1&&c%2==1)){
			cout << "Tonya" << endl;
		}
		else{
			cout << "Burenka" << endl;
		}
	}
}