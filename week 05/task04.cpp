#include <iostream>
using namespace std;

int main() 
{
    char serviceCode;
    double totalBill = 0.0;
    int minutesUsed, dayMinutes = 0, nightMinutes = 0;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if (serviceCode == 'R' || serviceCode == 'r') 
     {
        cout << "Enter the total number of minutes used: ";
        cin >> minutesUsed;

        if (minutesUsed > 50) {
            totalBill = 10.00 + (minutesUsed - 50) * 0.20;
        } else {
            totalBill = 10.00; 
        }
        cout << "Service Type: Regular" << endl;
        cout << "Minutes Used: " << minutesUsed << endl;
        cout << fixed  << "Total Bill: $" << totalBill << endl;

    } 
    else if (serviceCode == 'P' || serviceCode == 'p')
     {
        cout << "Enter the number of minutes used during the day: ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night: ";
        cin >> nightMinutes;

        if (dayMinutes > 75) {
            totalBill += (dayMinutes - 75) * 0.10;
        }
        if (nightMinutes > 100) {
            totalBill += (nightMinutes - 100) * 0.05;
        }

        totalBill += 25.00;

        cout << "Service Type: Premium" << endl;
        cout << "Day Minutes: " << dayMinutes << endl;
        cout << "Night Minutes: " << nightMinutes << endl;
        cout << fixed<< "Total Bill: $" << totalBill << endl;

    }
     else {
        cout << "Error: Invalid service code entered!" << endl;
    }
    return 0;
}