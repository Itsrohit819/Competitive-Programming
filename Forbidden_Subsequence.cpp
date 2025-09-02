#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string a,b;
		cin >> a >> b;
		int beg,end,cnt;
		for(int j=0;j<a.size();j++){
			for(int k=j+1;k<a.size();k++){
				if(a[j]>a[k]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		int count=0,x=97;
		for(int j=0;j<a.size();j++){
			if(a[j]==x && x<100){
				count++;
				x++;
			}
		}
		if(b=="abc"){
			if(count==3){
				for(int j=0;j<a.size();j++){
					if(a[j]=='b'){
						end=j;
					}
				}
				for(int j=0;j<a.size();j++){
					if(a[j]=='b'){
						beg=j;
						break;
					}
				}
				for(int j=0;j<a.size();j++){
					if(a[j]=='a'||a[j]=='c'){
						cout << a[j];
						cnt=j;
					}
				}
				for(int j=beg;j<=end;j++){
					cout << "b";
				}
				for(int j=cnt+1;j<a.size();j++){
					cout << a[j];
				}
			}
			else{
				for(int j=0;j<a.size();j++){
					cout << a[j];
				}
			}
		}
		else{
			for(int j=0;j<a.size();j++){
				cout << a[j];
			}
		}
		cout << endl;
	}
}