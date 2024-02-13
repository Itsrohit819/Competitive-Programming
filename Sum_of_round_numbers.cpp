#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int z=0;z<n;z++){
		int a,b[5],k;
		cin >> a;
		int i=a;
		while(i%10==0){
			i=i/10;
		}
		if(i<=9){
			cout << "1" << endl;
			cout << a << endl; 
		}
		else{
			i=1,k=0;
			while(a>0){
				if((a%10)!=0){
					b[k]=(a%10)*i;
					k++;
				}
				a=a/10;
				i=i*10;
			}
			cout << k << endl;
			for(int l=0;l<k;l++){
				cout << b[l] << " ";
			}
			cout << endl;
		}
		
	}
}