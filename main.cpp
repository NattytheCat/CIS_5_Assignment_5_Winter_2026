#include <iostream>
#include<Iomanip>
#include <string>

using std::cout;
using std::end;
using std::string;


struct Student {
    int id;
    string name;
    float grade;
};

void highestGrade(Student students[], int size) {
    float highest = students[0].grade;

    for (int i = 1; i < size; i++) {
        if (students[i].grade > highest) {
            highest = students[i].grade;
        }
    }

    cout << "Highest Grade: " << highest << endl;
}

void lowestGrade(Student students[], int size) {
    float lowest = students[0].grade;

    for (int i = 1; i < size; i++) {
        if (students[i].grade < lowest) {
            lowest = students[i].grade;
        }
    }

    cout << "Lowest Grade: " << lowest << endl;
}

void averageGrade(Student students[], int size) {
    float total = 0;

    for (int i = 0; i < size; i++) {
        total += students[i].grade;
    }

    cout << "Average Grade: " << total / size << endl;
}

void printStudentId(Student students[], int size) {
    cout << "Student IDs:" << endl;

    for (int i = 0; i < size; i++) {
        cout << students[i].id << endl;
    }
}

void printStudentName(Student students[], int size) {
    cout << "Student Names:" << endl;

    for (int i = 0; i < size; i++) {
        cout << students[i].name << endl;
    }
}

int main() {
    // Create an array of 5 students using a constructor
    Student students[5] = {
        Student("Jessica Smith", 2231460, 92.8.),
        Student("Andrew Cunningham", 2914873, 73.5),
        Student("Ryan Adolphus", 2615780, 98.9),
        Student("Ronald Britton", 2114787, 70.8),
        Student("Steven Lexington", 206475, 88.9)
    };
    int count = 5;

    int choice;
    do {
        cout << "\n Options for The Menu:\n";
        cout << "1. Highest Grade\n";
        cout << "2. Lowest Grade\n";
        cout << "3. Average Grade\n";
        cout << "4. Printing of Student IDs\n";
        cout << "5. Printing of Student Names\n";
        cout << "6. Exit\n";
        cout << "Please Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                highestGrade(students, 5);
                break;
            case 2:
                lowestGrade(students, 5);
                break;
            case 3:
                averageGrade(students, 5);
                break;
            case 4:
                printStudentId(students, 5);
                break;
            case 5:
                printStudentName(students, 5);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
