#include <iostream>
#include <string>
using namespace std;

string decideActivity(string temperature, string humidity)
 {
    if (temperature == "warm" && humidity == "dry")
     {
        return "Play tennis";
    } else if (temperature == "warm" && humidity == "humid")
     {
        return "Swim";
    } else if (temperature == "cold" && humidity == "dry")
     {
        return "Play basketball";
    } else if (temperature == "cold" && humidity == "humid")
     {
        return "Watch TV";
    } else {
        return "Invalid input";
    }
}

int main() 
{
    string temperature, humidity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    string activity = decideActivity(temperature, humidity);
    cout << "Recommended activity: " << activity << endl;
    return 0;
}