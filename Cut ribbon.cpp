#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b,c;
	cin >> a >> b >> c;
	int ans=0;
	for(int x=0;x<4001;x++){
		for(int y=0;y<4001;y++){
			int zc = n-(x*a+y*b);
			if(zc<0){
				break;
			}
			double z=zc/(double)c;
			if(z==(int)z){
				ans = max(ans,(int)z+y+x);
			}
		}
	}
	cout << ans ;
	return 0;
} 