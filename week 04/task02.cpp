#include <iostream>
using namespace std;
float taxCalculator(char type, float price) 
{
    float taxRate = (type == 'M') * 6.0 + (type == 'E') * 8.0 + (type == 'S') * 10.0 + (type == 'V') * 12.0 + (type == 'T') * 15.0;
    float taxAmount = price * taxRate / 100.0;
    return price + taxAmount;
}
int main()
 {
    char vehicleType;
    float vehiclePrice;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;
    cout << "Enter the price of the vehicle: $";
    cin >> vehiclePrice;
    float finalPrice = taxCalculator(vehicleType, vehiclePrice);
    cout << fixed << endl;
    cout << "The final price of a vehicle of type " << vehicleType << " after adding the tax is $" << finalPrice << endl;
    return 0;
}