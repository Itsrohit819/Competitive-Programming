#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long int a;
		cin >> a;
		if(a%2==1 || a==2){
			cout << -1 << endl;
		}
		else if(a==4 || a==6){
			cout << "1 1" << endl;
		}
		else{
			if(a%6==0){
				cout << a/6 << " ";
			}
			else{
				cout << a/6 + 1 << " ";
			}
			cout << a/4 << endl;
		}
	}
}