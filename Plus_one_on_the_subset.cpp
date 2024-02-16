#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin >> p;
	for(int j=0;j<p;j++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int max=a[0],min=a[0];
		for(int i=0;i<n;i++){
			if(max<a[i]){
				max=a[i];
			}
			if(min>a[i]){
				min=a[i];
			}
		}
		cout << max-min << endl;
	}
}