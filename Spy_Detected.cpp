#include<iostream>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		int n;
		cin >> n;
		int a[n];
		for(int j=0;j<n;j++){
			cin >> a[j];
		}
		if(a[0]==a[1]){
			for(int j=0;j<n;j++){
				if(a[j]!=a[0]){
					cout << j+1 << endl;
				}
			}
		}
		else{
			if(a[1]==a[2]){
				cout << "1" << endl;
			}
			else{
				cout << "2" << endl;
			}
		}
	}
}