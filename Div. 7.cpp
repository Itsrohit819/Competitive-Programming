#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		if(n%7==0){
			cout << n << endl;
		}
		else{
			int flag = 0,k=n,x=n,y=n;
			for(int i=1;i<=9;i++){
				k=(k/10)*10;
				if((i!=n%10)&&(k+i)%7==0){
					cout << k+i << endl;
					flag=1;
					break;
				}
			}
			if(flag==0){
				x = x-(x%100-x%10)*10;
				for(int i=10;i<=90;i+=10){
					if((i!=(n%100-n%10))&&(x+i)%7==0){
						cout << x+i << endl;
						flag=1;
						break;
					}
				}
			}
			if(flag==0){
				y = y-(y%1000-y%100)*100;
				for(int i=100;i<=900;i+=100){
					if((i!=(n%1000-n%100))&&(y+i)%7==0){
						cout << y+i << endl;
						break;
					}
				}
			}
		}
	}
}