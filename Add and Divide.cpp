#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		long long a,b,cnt=0,flag=0;
		cin >> a >> b;
		long long x=a;
		if(b==1){
			flag=1;
		}
		int k=0;
		if(b==1){
			cnt++;
			b=2;
		}
		while(x>0){
			x = x/b;
			cnt++;
		}
		for(int i=1;i<cnt;i++){
			k=i;
			x=a;
			while(x>0){
				x = x/(b+i);
				k++;
			}
			if(flag==1){
				k++;
			}
			if(k<cnt){
				cnt=k;
			}
		}
		cout << cnt << endl;
	}
}