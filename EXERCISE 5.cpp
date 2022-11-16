/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

void calculus(int num1,int num2,int result);
void calculus(int num1,int num2,int result){
    
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    char oper;
    cout<<"Enter operator (+,-,*,/,%,^): ";
    cin >> oper;
    
    if(oper == '+'){
        result=num1+num2;
    }else if(oper=='-'){
        result=num1-num2;
    }else if(oper=='*'){
        result=num1*num2;
    }else if(oper=='/'){
        result=num1/num2;
    }else if(oper=='%'){
        result=num1%num2;
    }else if(oper=='^'){
        result=num1^num2;
    }
    cout<<"result: "<<result<<"\n";
}



int main()
{
    int a,b,c;
    calculus(a,b,c);

    return 0;
}
