/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int square(int x, int y){
    return pow(x,y);
}

int main()
{   
    int x,y;
    cout << "First number: ";
    cin>>x;
    cout << "Second number: ";
    cin>>y;
    
    cout<<square(x,y);
    return 0;
}
