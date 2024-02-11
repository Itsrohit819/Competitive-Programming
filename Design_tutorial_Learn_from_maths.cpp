#include<iostream>
#include<math.h>
using namespace std;
int comp(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
int main(){
	int a;
	cin >> a;
	for(int i=4;i<(a-4);i++){
		if(comp(i) && comp(a-i)){
			cout << i << " " << a-i << endl;
			return 0;
		}
	}
}