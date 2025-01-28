#include <iostream>
#include <string>
using namespace std;


float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology) {
    return (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5;
}

string calculateGrade(float average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B+";
    } else if (average >= 60) {
        return "B";
    } else if (average >= 50) {
        return "C";
    } else if (average >= 40) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    string studentName;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;

    cout << "Enter student name: ";
    getline(cin, studentName);


    cout << "Enter marks in English: ";
    cin >> marksEnglish;
    cout << "Enter marks in Maths: ";
    cin >> marksMaths;
    cout << "Enter marks in Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks in Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks in Biology: ";
    cin >> marksBiology;

    float average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    string grade = calculateGrade(average);
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Total Marks: " << (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
