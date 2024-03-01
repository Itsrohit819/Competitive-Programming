#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	cin >> a;
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	int cnt=0;
	for(int j=1;j<i;j++){
		if(abs(a[j]-a[j-1])>(26-abs(a[j]-a[j-1]))){
			cnt=cnt+26-abs(a[j]-a[j-1]);
		}
		else{
			cnt=cnt+abs(a[j]-a[j-1]);
		}
		
	}
	if(abs(a[0]-'a')>(26-abs(a[0]-'a'))){
		cnt+=26-abs(a[0]-'a');
	}
	else{
		cnt+=abs(a[0]-'a');
	}
	cout << cnt << endl;
}