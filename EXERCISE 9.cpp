/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int sum(int number){
    int sum = 0;
    for(int i = 0;i<=number;i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int a,number;
    cout << "Enter a number: ";
    cin >> a;
    cout<<"Enter number: ";
    cin>>number;

    cout<<sum(a);
}