//
// Created by Kishi Kishore N on 30/09/25.
//
#include <iostream>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    int getRollNo() const {
        return rollNo;
    }

    void display() const {
        cout << "Name: " << name << ", Roll No: " << rollNo
             << ", Marks: " << marks << endl;
    }
};

class StudentManager {
private:
    vector<Student> students;

public:
    void addStudent(string name, int rollNo, float marks) {
        students.emplace_back(name, rollNo, marks);
        cout << "Student added successfully!\n";
    }

    void displayAll() const {
        if (students.empty()) {
            cout << "No students found.\n";
            return;
        }
        cout << "\n--- Student List ---\n";
        for (const auto& s : students) {
            s.display();
        }
    }

    void searchStudent(int rollNo) const {
        for (const auto& s : students) {
            if (s.getRollNo() == rollNo) {
                cout << "Student found:\n";
                s.display();
                return;
            }
        }
        cout << "Student with roll number " << rollNo << " not found.\n";
    }
};

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int rollNo;
                float marks;
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter roll number: ";
                cin >> rollNo;
                cout << "Enter marks: ";
                cin >> marks;
                manager.addStudent(name, rollNo, marks);
                break;
            }
            case 2:
                manager.displayAll();
                break;
            case 3: {
                int rollNo;
                cout << "Enter roll number to search: ";
                cin >> rollNo;
                manager.searchStudent(rollNo);
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}