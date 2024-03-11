#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a==b && b==c){
			cout << "YES" << endl;
			cout << a<<" "<<a<<" "<<a<<endl;
		}
 		else if(a==b && a>c){
			cout << "YES" << endl;
			cout << c <<" "<< c <<" "<< a << endl;
		}
		else if(a==c && c>b){
			cout << "YES" << endl;
			cout << b << " " << b << " " << a << endl;
		}
		else if(b==c && c>a){
			cout << "YES" << endl;
			cout << a <<" "<<a<<" "<<b<<endl;
		}
		else{
			cout << "NO"<< endl;
		}
	}
}