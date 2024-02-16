#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int j=0;j<n;j++){
		int i;
		cin >> i;
		if(i%1111==0){
			cout << 10*i/1111 << endl;
		}
		else if(i%111==0){
			cout << 10*(i/111-1)+6 << endl;
		}
		else if(i%11==0){
			cout << 10*(i/11-1)+3 << endl;
			
		}
		else{
			cout << 10*(i-1)+1 << endl;
		}
	}
}