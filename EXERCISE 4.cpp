/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;


void fib(int m){
    int f[m];
    int i;
    f[0] = 0;
    f[1] = 1;
    
    for(i=2;i<m;i++){
        f[i] = f[i-1] + f[i-2];
    }
    for(i=0;i<m;i++){
        cout<<f[i]<<" ";
    }
}

int main()
{
    int m;
    cout<<"Enter number: ";
    cin >> m;
    fib(m);
    getchar();
    
    return 0;
}
