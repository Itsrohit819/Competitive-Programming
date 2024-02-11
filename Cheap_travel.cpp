#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	int sum=0;
	if(b>=a){
		if((a*c)<=d){
			sum=sum+c;
		}
		else{
			sum=sum+d;			
		}
	}
	else{
		int p;
		p=a/b;
		sum=sum+p*d;
		if(a!=(p*b)){
			if(d<c){
				sum=sum+d;
			}
			else{
				sum=sum+(a-(p*b))*c;
			}
		}
	}
	if(sum>(a*c)){
		cout << a*c << endl;
	}
	else{
		cout << sum << endl;
	}
	
}