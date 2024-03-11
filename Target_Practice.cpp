#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int cnt=0;
		char a[10][10];
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				cin >> a[j][k];
			}
		}
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				if(j==0 || k==0 || j==9 || k==9){
					if(a[j][k]=='X'){
						cnt+=1;
					}
				}
				else if(((j==1||j==8)&&k!=0&&k!=9)||((k==1||k==8)&&j!=0&&j!=9)){
					if(a[j][k]=='X'){
						cnt+=2;
					}
				}
				else if(((j==2||j==7)&&k<8&&k>1)||((k==2||k==7)&&j<8&&j>1)){
					if(a[j][k]=='X'){
						cnt+=3;
					}
				}
				else if(((j==3||j==6)&&k<7&&k>2)||((k==3||k==6)&&j<7&&j>2)){
					if(a[j][k]=='X'){
						cnt+=4;
					}
				}
				else{
					if(a[j][k]=='X'){
						cnt+=5;
					}
				}
				
			}
		}
		cout << cnt << endl;
	}
}