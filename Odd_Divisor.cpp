#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;
        while(a%2==0){
            a=a/2;
        }
        if(a==1){
            cout<< "NO"<<endl;
        }
        else{
            cout<< "YES"<<endl;
        }
    }
}