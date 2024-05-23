#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b;
		long long c;
		long long int cnt=0;
		cin >> a >> b >> c;
		if((c*b+c-1)%(a-1)==0){
			cnt=(c*b+c-1)/(a-1);
		}
		else{
			cnt=((c*b+c-1)/(a-1))+1;
		}
		cout << cnt+c << endl;
	}
}