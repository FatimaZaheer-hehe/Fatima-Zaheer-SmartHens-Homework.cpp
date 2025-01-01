#include <iostream>
using namespace std;

float calculateSpeed(float d,float t) 
{
    return d / t;
}

int main()
{
    float distance, time ;

    cout << "Enter distance: ";
    cin >> distance;
    cout << "Enter time: ";
    cin >> time;

    float speed = calculateSpeed(distance, time);
    cout << "Speed is " << speed;

    return 0;
}