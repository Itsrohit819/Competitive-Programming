#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b;
    
	for(int i=0;i<m;i++){
		int cnt=0;
		cin >> b;
		for(int j=0;j<n;j++){
			if(b>=a[j]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
    return 0;
}
