#include <iostream>

using namespace std;

int main()
{
    int studentId = 1281;
    double score = 81.29;
    char grade = 'A';
    bool passedExam = true;

    cout << boolalpha; // enable printing "true"/"false"

    cout << "Student ID: " << studentId << "\n";
    cout << "Student Score: " << score << "\n";
    cout << "Student Grade: " << grade << "\n";
    cout << "Student Passed: " << passedExam << "\n";

    return 0;
}