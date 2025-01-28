#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit, day;
    double quantity, price = 0.0;

    cout << "Enter the fruit (banana/apple/orange/grapefruit/kiwi/pineapple/grapes): ";
    cin >> fruit;
    cout << "Enter the day of the week: ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;

    bool isWeekend = (day == "Saturday" || day == "Sunday");

    if (fruit == "banana")
     {
        price = isWeekend ? 2.70 : 2.50;
    }
     else if (fruit == "apple") {
        price = isWeekend ? 1.25 : 1.20;
    } 
    else if (fruit == "orange") {
        price = isWeekend ? 0.90 : 0.85;
    }
     else if (fruit == "grapefruit") {
        price = isWeekend ? 1.60 : 1.45;
    } 
    else if (fruit == "kiwi") {
        price = isWeekend ? 3.00 : 2.70;
    }
     else if (fruit == "pineapple") {
        price = isWeekend ? 5.60 : 5.50;
    }
     else if (fruit == "grapes") {
        price = isWeekend ? 4.20 : 3.85;
    }
     else {
        cout << "error" << endl;
        return 0;
    }
    if (day != "Monday" && day != "Tuesday" && day != "Wednesday" &&
        day != "Thursday" && day != "Friday" && day != "Saturday" && day != "Sunday") {
        cout << "error" << endl;
        return 0;
    }
    double total = price * quantity;
    cout << fixed  << total << endl;
    return 0;
}