#include<iostream>
using namespace std;

int main()
{
    int marks[5]= {78,45,96,85,65};
    // cout<<marks[0]<<endl;   
    // cout<<marks[1]<<endl;   
    // cout<<marks[2]<<endl;   
    // cout<<marks[3]<<endl;   
    // cout<<marks[4]<<endl;   
    // for ( int i = 0; i < 5; i++)
    {
        // cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    }
    //  int i = 0;
      marks[3]= 21;
    
    // while (i < 5)
     {
    //     cout << "The marks of " << i << " is " << marks[i] << endl;
    //     i++;
    }
    int i = 0;
    
    do
    {
        cout << "The marks of " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 5);
        
    return 0;
}