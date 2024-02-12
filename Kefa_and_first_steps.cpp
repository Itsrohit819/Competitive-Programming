#include<iostream>
using namespace std;
int main(){
	int n,j,cnt;
	cin >> n;
	int a[n],count=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		j=i;
		cnt=1;
		while(j<(n-1) && a[j+1]>=a[j]){
			cnt++;
			j++;
		}
		if(cnt>=count){
			count=cnt;
		}
		if(count>=(n+1)/2){
			cout << count << endl;
			return 0;
		}
	}
	cout << count << endl;
}