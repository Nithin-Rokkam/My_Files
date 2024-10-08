#include <iostream>
using namespace std;

int main() {
    long num;
    int rem, dec = 0, b = 1;
    cout << "Enter the num:";
    cin >> num;
    
    long temp = num; // Corrected data type
    
    // Loop until a valid binary number is entered
    while (temp != 0) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1) {
            cout << "Invalid binary digit entered.";
            return 1; // Exit the program due to invalid input
        }
        dec = dec + digit * b;
        temp = temp / 10;
        b *= 2;
    }
    
    cout << "Your decimal num is: " << dec;
    return 0;
}

