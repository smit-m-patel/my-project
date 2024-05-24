#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent a student
struct Student {
    string name;
    int id;
    double gpa;

    // Constructor
    Student(string n, int i, double g) : name(n), id(i), gpa(g) {}
};

// Function to add a student to the system
void addStudent(vector<Student> &students) {
    string name;
    int id;
    double gpa;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student GPA: ";
    cin >> gpa;

    students.push_back(Student(name, id, gpa));
}

// Function to display all students
void displayStudents(const vector<Student> &students) {
    cout << "Student List:" << endl;
    for (const auto &student : students) {
        cout << "Name: " << student.name << ", ID: " << student.id << ", GPA: " << student.gpa << endl;
    }
}

int main() {
    vector<Student> students;
    char choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                addStudent(students);
                break;
            case '2':
                displayStudents(students);
                break;
            case '3':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '3');

    return 0;
}
