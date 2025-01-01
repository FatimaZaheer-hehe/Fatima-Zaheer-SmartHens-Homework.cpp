#include <iostream>
using namespace std;


int howManyStickers(int sideLength)
 {
    return 6 * sideLength * sideLength; 
 }
int main(){
    int sideLength;

    cout << "Enter the side length of the Rubik's Cube: ";
    cin >> sideLength;

    int stickers = howManyStickers(sideLength);
    cout << "Number of stickers needed: " << stickers << endl;

    return 0;
}