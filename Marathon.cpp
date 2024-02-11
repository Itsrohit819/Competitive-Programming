#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c,d,cnt=0;
		cin >>a>>b>>c>>d;
		if(b>a){
			cnt++;
		}
		if(c>a){
			cnt++;
		}
		if(d>a){
			cnt++;
		}
		cout << cnt << endl;
	}
}