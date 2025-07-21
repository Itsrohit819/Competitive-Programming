#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		long long int a;
		cin >> a;
		long long i=1;
		while(((a&i)<=0)||((a^i)<=0)){
			i++;
		}
		cout << i << endl;
	}
}