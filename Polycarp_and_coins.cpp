#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a%3==0){
			cout << a/3 << " " << a/3 << endl;
		}
		else if((a-1)%3==0){
			cout << a/3+1 << " " << a/3 << endl;
		}
		else{
			cout << a/3 << " " << a/3+1 << endl;
		}
	}
}