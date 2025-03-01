#include <iostream>
#include <fstream>
using namespace std;

void calculateGPA() {
}

void calculateCGPA() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    float totalPoints = 0.0;
    float totalCredits = 0.0;

    for (int i = 0; i < numCourses; i++) {
        float grade, credits;
        cout << "Enter grade for course " << (i + 1) << ": ";
        cin >> grade;
        cout << "Enter credits for course " << (i + 1) << ": ";
        cin >> credits;

        totalPoints += grade * credits;
        totalCredits += credits;
    }

    float cgpa = totalPoints / totalCredits;
    cout << "Your CGPA is: " << cgpa << endl;
    ofstream outFile("cgpa_data.txt");
    outFile << "CGPA: " << cgpa << endl;
    outFile.close();
}

int main() {
    system("cls");
    int input;
    cout << "1. Calculate GPA\n2. Calculate CGPA\n3. Exit\n";
    cin >> input;

    switch (input) {
        case 1:
            calculateGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        case 3:
            exit(EXIT_SUCCESS);
        default:
            cout << "Invalid input. Try again!\n";
    }
    return 0;
}