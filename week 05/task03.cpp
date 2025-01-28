#include <iostream>
#include <string>
using namespace std;

string zodiacSign(int day, string month)
 {
    if ((month == "March" && day >= 21) || (month == "April" && day <= 19)) {
        return "Aries (The Ram)";
    } else if ((month == "April" && day >= 20) || (month == "May" && day <= 20)) {
        return "Taurus (The Bull)";
    } else if ((month == "May" && day >= 21) || (month == "June" && day <= 20)) {
        return "Gemini (The Twins)";
    } else if ((month == "June" && day >= 21) || (month == "July" && day <= 22)) {
        return "Cancer (The Crab)";
    } else if ((month == "July" && day >= 23) || (month == "August" && day <= 22)) {
        return "Leo (The Lion)";
    } else if ((month == "August" && day >= 23) || (month == "September" && day <= 22)) {
        return "Virgo (The Virgin)";
    } else if ((month == "September" && day >= 23) || (month == "October" && day <= 22)) {
        return "Libra (The Scales)";
    } else if ((month == "October" && day >= 23) || (month == "November" && day <= 21)) {
        return "Scorpio (The Scorpion)";
    } else if ((month == "November" && day >= 22) || (month == "December" && day <= 21)) {
        return "Sagittarius (The Archer)";
    } else if ((month == "December" && day >= 22) || (month == "January" && day <= 19)) {
        return "Capricorn (The Goat)";
    } else if ((month == "January" && day >= 20) || (month == "February" && day <= 18)) {
        return "Aquarius (The Water Bearer)";
    } else if ((month == "February" && day >= 19) || (month == "March" && day <= 20)) {
        return "Pisces (The Fishes)";
    } else {
        return "Invalid date or month";
    }
}

int main()
 {
    int day;
    string month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    string sign = zodiacSign(day, month);
    cout << "Your Zodiac Sign: " << sign << endl;

    return 0;
}