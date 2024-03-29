#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5.Power" <<endl;
    cout << "6.Modulo"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << num1 + num2 << endl;
            break;
        case 2:
            cout << num1 - num2 << endl;
            break;
        case 3:
            cout << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << num1 / (double)num2 << endl;
            }
            break;
        case 5:
           cout<<pow(num1,num2)<<endl;
           break;
        case 6:
           cout<<num1%num2<<endl;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}
