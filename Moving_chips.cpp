#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin >> ar[i];
		}
		int x,y,c=0;
		for(int i=0;i<n;i++){
			if(ar[i]==1){
				x=i;
				break;
			}
			
		}
		for(int i=n-1;i>=0;i--){
			if(ar[i]==1){
				y=i;
				break; 
			}
		}
	    for(int i=x;i<=y;i++){
	    	if(ar[i]==0){
	    		c++;
			}
		}
		cout << c << endl;
	}
	
}