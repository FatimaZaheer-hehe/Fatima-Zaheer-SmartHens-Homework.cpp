#include <iostream>
#include <string>
using namespace std;

float calculatePayableAmount(string day, float purchaseAmount) {
    if (day == "Sunday")
    {
        return purchaseAmount * 0.9;
    }
    return purchaseAmount; 
}
int main()
 {
    string day;
    float purchaseAmount;

    cout << "Enter the day of the week: ";
    cin >> day;
    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    float payableAmount = calculatePayableAmount(day, purchaseAmount);
    cout << "Payable Amount: $" << payableAmount << endl;
    return 0;
}
