#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Student {
private:
    int rollNo;
    string name;
    string course;

public:
    
    void inputData() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Student Name: ";
        cin>>name;
        cout << "Enter Course Name: ";
        cin>> course;
        cout << "Student added successfully!\n";
    }

    int RollNo() const {
        return rollNo;
    }

    void displayData() const {

        cout << "Roll No: " << rollNo << "\n";
        cout << "Name   : " << name << "\n";
        cout << "Course : " << course << "\n";

    }



};

int main() {
    vector<Student> students; 
    int choice;

    do {

        cout << "   COLLEGE MANAGEMENT SYSTEM     \n";

        cout << "1. Add New Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Student s;
                s.inputData();
                students.push_back(s);
                break;
            }
            case 2: 
                
                    cout << "\n--- LIST OF ALL STUDENTS ---\n";
                    for (size_t i = 0; i < students.size(); ++i) {
                        students[i].displayData();
                    
                
                break;
            }
            case 3: {
                if (students.empty()) {
                    cout << "\nNo student records\n";
                    break;
                }
                int searchRoll;
                cout << "\nEnter Roll Number to search: ";
                cin >> searchRoll;
                bool found = false;

                for (size_t i = 0; i < students.size(); ++i) {
                    if (students[i].RollNo() == searchRoll) {
                        cout << "\nStudent Found:\n";
                        students[i].displayData();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nStudent with Roll Number " << searchRoll << " not found!\n";
                }
                break;
            }
            case 4:
                cout << "\nExiting program. Thank you!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    

    return 0;
}