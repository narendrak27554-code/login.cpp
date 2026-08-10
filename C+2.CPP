#include <iostream>
using namespace std;

int main()
{
    int n;
    float credit, gradePoint;
    float totalCredits = 0, totalGradePoints = 0, cgpa;

    cout << "===== CGPA CALCULATOR =====" << endl;
    cout << "Enter Number of Subjects: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nSubject " << i << endl;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        cout << "Enter Grade Point (0-10): ";
        cin >> gradePoint;

        totalCredits += credit;
        totalGradePoints += (credit * gradePoint);
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\n==========================" << endl;
    cout << "Total Credits = " << totalCredits << endl;
    cout << "CGPA = " << cgpa << endl;
    cout << "==========================" << endl;

    return 0;
}