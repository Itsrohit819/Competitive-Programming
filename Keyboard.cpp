#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[11]={'q','w','e','r','t','y','u','i','o','p','\0'};
	char b[11]={'a','s','d','f','g','h','j','k','l',';','\0'};
	char c[11]={'z','x','c','v','b','n','m',',','.','/','\0'};
	char ch;
	cin >> ch;
	char x[100];
	cin >> x;
	int m=0;
	while(x[m]!='\0'){
		m++;
	}
	if(ch=='R'){
		for(int i=0;i<m;i++){
			for(int j=0;j<11;j++){
				if(x[i]==a[j]){
					cout << a[j-1];
				}
				if(x[i]==b[j]){
					cout << b[j-1];
				}
				if(x[i]==c[j]){
					cout << c[j-1];
				}
			}
		}
	}
	else{
		for(int i=0;i<m;i++){
			for(int j=0;j<11;j++){
				if(x[i]==a[j]){
					cout << a[j+1];
				}
				if(x[i]==b[j]){
					cout << b[j+1];
				}
				if(x[i]==c[j]){
					cout << c[j+1];
				}
			}
		}
	}
}