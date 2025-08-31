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
    for(int i=1;i<5;i++){
        int cnt=pow(2,i)-1;
        if(i==1){
            cout << "1\n";
            continue;
        }
        for(int j=1;j<=(2*i-1);j++){
            if(j!=i){
                cout << cnt << " ";
                cnt+=2;
            }
            else{
                cout << cnt*((i-1)*2)-((i-1)*2) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}