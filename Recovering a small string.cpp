#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,j,l;
	cin >> n;
	char ch;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a>52){
			k=a-52;
			ch=96+k;
			cout << ch << "z" << "z" <<endl;
		}
		else if(a==27){
			cout << "a" << "a" << "y" << endl;
		}
		else if(a>26){
			j=a-26;
			j=j-1;
			ch=96+j;
			cout << "a" << ch << "z" << endl;
		}
		else{
			l=a-2;
			ch=96+l;
			cout << "a" << "a" << ch << endl;
		}
	}
}