#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char a[100];
		cin>>a;
		cout<<a[0];
		for(int j=1;j<a.size();j++){
			if(a[j]!=a[j-1]){
				cout<<a[j];
			}
		}
	}
}