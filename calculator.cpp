#include<iostream>
using namespace std;

int main()
{
    char c;
    float num1, num2;
    cout<<"enter an operator(+,-,*,/):";
    cin>>c;
    cout<<"enter two numbers:";
    cin>>num1>>num2;

    switch(c)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break; 

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

        case '/': if(num2 !=0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        else
        cout<<"can't divide by 0!!!";
        break;

        default:
        cout<<"invalid operator!!!";
        break;
        
    }
    return 0;
}