#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin >>a>>b>>c;
		if(a>=b && a>=c && a==(b+c)){
			cout << "YES" << endl;
		}
		else if(b>=a && b>=c && b==(a+c)){
			cout << "YES" << endl;
		}
		else if(c>=b && c>=a && c==(b+a)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	}
}