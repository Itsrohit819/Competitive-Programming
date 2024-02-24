#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,cnt=1,c;
		cin >> a >> b >> c;
		while(a%2==0){
			a=a/2;
			cnt=cnt*2;
		}
		while(b%2==0){
			b=b/2;
			cnt=cnt*2;
		}
		if(cnt>=c){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
		
		