#include <iostream>
using namespace std;

// Function that takes an integer by value
void modifyValue(int num) {
    num = num * 2; // Modify the value of num
    cout << "Inside modifyValue function, modified num: " << num << endl;
}

int main() {
    int originalValue = 10;
    
    cout << "Original value before function call: " << originalValue << endl;
    
    // Call the function with originalValue
    modifyValue(originalValue);
    
    // Check the value of originalValue after the function call
    cout << "Original value after function call: " << originalValue << endl;

    return 0;
}