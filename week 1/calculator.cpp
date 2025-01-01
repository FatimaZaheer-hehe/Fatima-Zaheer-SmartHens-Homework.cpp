#include <iostream>
using namespace std;

int main() {
    int num1, num2,operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Result: ";
    cout << "Sum of two numbers is:"<< num1 + num2<<endl ;
     cout << "Subtraction  of two numbers is:"<< num1 - num2 <<endl;
    cout << "Multiplication of two numbers is:"<< num1 * num2<<endl ;
    cout << "Division of two numbers is:"<< num1 / num2<<endl ;
    return 0;
}
