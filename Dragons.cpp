#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n;
	cin >> a >> n;
	int p[n],q[n];
	for(int i=0;i<n;i++){
		cin >> p[i] >> q[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(p[i]>p[j]){
				int temp1=p[i];
				p[i]=p[j];
				p[j]=temp1;
				int temp2=q[i];
				q[i]=q[j];
				q[j]=temp2;
				
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a>p[i]){
			a=a+q[i];
		}
		else{
			cout << "NO" << endl;
			return 0;
		}
		if(i==(n-1)){
			cout << "YES" << endl;
		}
	}
}
