#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age:";
    cin >> age;

    if(age<18)
    {
        cout<<"you can not drive";
    }
    else if(age>18)
    {
        cout<<"you can drive";
    }
    else
    {
        cout<<"you can learn driving";
    }
    return 0;
}
