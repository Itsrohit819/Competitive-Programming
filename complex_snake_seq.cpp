/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int cnt=0,temp=1;
        for(int j=1;j<=i;j++){
            if(j==1){
                cout << i << " ";
                continue;
            }
            if(j%2==0){
                cout << (n*j-i+1-cnt) << " ";
            }
            else{
                cout << (n*(j-1)+i-cnt-temp) << " ";
            }
            cnt += temp;
            temp++;
        }
        cout << endl;
    }
    return 0;
}