#include <iostream>
using namespace std;

float calculateFuel(float distance) {
    return distance * 10; 
}

int main() {
    float distance;

    cout << "Enter the distance traveled: ";
    cin >> distance;

    float fuelNeeded = calculateFuel(distance);
    cout << "Fuel needed: " << fuelNeeded << " liters" << endl;

    return 0;
}