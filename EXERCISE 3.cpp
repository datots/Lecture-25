/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fib(int m){
    if((m==1) || (m== 0)){
        return  m;
    }else{
        return (fib(m-1)+fib(m-2));
    }
}


int main()
{
    int m,i=0;
    cout <<"Enter Numbers: ";
    cin >> m;
    cout<<"\nFibonacci Series is as follows\n";
    
    while(i<m){
        cout<<" "<<fib(i);
        i++;
    }

    return 0;
}
