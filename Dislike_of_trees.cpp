#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[1001],cnt=1;
	for(int i=0;i<1000;i++){
		if(((cnt)%3==0) || ((cnt)%10==3)){
			cnt++;
			if(cnt%3==0 || cnt%10==3){
				cnt++;
			}
		}
		a[i]=cnt;
		cnt++;
	}
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		cout << a[k-1] << endl;
	}
}