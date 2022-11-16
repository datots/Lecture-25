/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;


int myfunction(int a,int b){
    return a+b;
}
int main()
{  
    int sum;
    sum = myfunction(5,9);
    cout <<"The sum is: " <<sum<<endl;

    return 0;
}
