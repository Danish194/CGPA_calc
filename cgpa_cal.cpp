#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void CGPA() {
    int numCourses;
    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<double> grades(numCourses);
    vector<int> credits(numCourses);

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (in GPA format, e.g., 9.0 for A): ";
        cin >> grades[i];
        cout << "Enter credit hours: ";
        cin >> credits[i];

        while (grades[i] < 0.0 || grades[i] > 10.0) {
            cout << "Invalid grade. Please enter a grade between 0.0 and 10.0: ";
            cin >> grades[i];
        }

        while (credits[i] <= 0) {
            cout << "Invalid credit hours. Please enter a positive integer: ";
            cin >> credits[i];
        }

        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n\nCourse Grades and Credits:\n";
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 << " - Grade: " << grades[i] << ", Credits: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Your CGPA is: " << cgpa << endl;
}

int main() {
    CGPA();
    return 0;

}
