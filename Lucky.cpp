#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string a;
		cin >> a;
		if((a[0]+a[1]+a[2])==(a[3]+a[4]+a[5])){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}