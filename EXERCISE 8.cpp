/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


int max_two(int num1,int num2){
    int max;
    if(num1>num2){
        max=num1;
    }else if(num2>num2){
        max=num2;
    }
    return max;
}

int main()
{
    int num1;int num2;int maximum;
    
    cout<< "Enter first number:";
	cin>> num1;
	cout<< "Enter second number:";
	cin>> num2;
    
    maximum=max_two(num1,num2);
	cout<< "The maximun of "<< num1 << " and " << num2 << " is: " << maximum <<"\n";
    return 0;
}