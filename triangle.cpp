#include<iostream>
using namespace std;

int main()
{
    int r,c,l;
 cout << "Enter the line ";
 cin >> l;
 for(r = 1; r <= l; r++)
 {
 for( c= 1; c<= r; c++)
 {
 cout <<"*";
 }
 cout << "\n";
 }
     return 0;

}