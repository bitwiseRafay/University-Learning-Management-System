#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string user, password;
    int input;
    string student1 = "NV", student2 = "NV", student3 = "NV", student4 = "NV", student5 = "NV";
    int marks1 = -1, marks2 = -1, marks3 = -1, marks4 = -1, marks5 = -1;

    cout << "Enter your username : ";
    cin >> user;
    cout << "Enter your password : ";
    cin >> password;

    if (user == "Administrators" && password == "PF2025") {

        while (true) {

            cout << "*********************************************************************************" << endl;
            cout << "                             University Grading System                           " << endl;
            cout << "*********************************************************************************" << endl;
            cout << "Enter 1 to add a student" << endl;
            cout << "Enter 2 to search a student" << endl;
            cout << "Enter 3 to delete a student" << endl;
            cout << "Enter 4 to update the data of a student" << endl;
            cout << "Enter 5 to display number of students in the system" << endl;
            cout << "Enter 6 to display list of all students without grade" << endl;
            cout << "Enter 7 to display list of all students with grade" << endl;
            cout << "Enter 0 to close program" << endl;
            cout << "Enter Input between 0-7 : ";
            cin >> input;

            if (input > 7 || input < 0) {
                cout << "Invalid input" << endl;
                continue;
            }

            if (input == 0) {
                cout << "Program closed Successfully" << endl;
                break;
            }

            // Option 5: Display number of students
            if (input == 5) {
                int count = 0;
                if (student1 != "NV") {
                     count++; 
                    }
                if (student2 != "NV") {
                     count++; 
                    }
                if (student3 != "NV") { 
                    count++;
                 }
                if (student4 != "NV") { 
                    count++;
                 }
                if (student5 != "NV") { 
                    count++;
                 }
                cout << "Number of students in the system: " << count << endl;
            }

            // Option 1: Add a student
            if (input == 1) {
                cin.ignore();
                if (student1 == "NV") {
                    cout << "Enter Student Name : ";
                    getline(cin, student1);
                    cout << "Enter Marks : ";
                    cin >> marks1;
                    cout << "Student added Successfully" << endl;
                }
                else if (student2 == "NV") {
                    cout << "Enter Student Name : ";
                    getline(cin, student2);
                    cout << "Enter Marks : ";
                    cin >> marks2;
                    cout << "Student added Successfully" << endl;
                }
                else if (student3 == "NV") {
                    cout << "Enter Student Name : ";
                    getline(cin, student3);
                    cout << "Enter Marks : ";
                    cin >> marks3;
                    cout << "Student added Successfully" << endl;
                }
                else if (student4 == "NV") {
                    cout << "Enter Student Name : ";
                    getline(cin, student4);
                    cout << "Enter Marks : ";
                    cin >> marks4;
                    cout << "Student added Successfully" << endl;
                }
                else if (student5 == "NV") {
                    cout << "Enter Student Name : ";
                    getline(cin, student5);
                    cout << "Enter Marks : ";
                    cin >> marks5;
                    cout << "Student added Successfully" << endl;
                }
                else {
                    cout << "Sorry, No more student can be added" << endl;
                }
            }

            // Option 2: Search student
            if (input == 2) {
                string search;
                bool found = false;
                cin.ignore();
                cout << "Enter Student Name to search : ";
                getline(cin, search);

                if (student1 == search) {
                    cout << "Student Name: " << student1 << endl;
                    cout << "Marks: " << marks1 << endl;
                    if (marks1 >= 85) { 
                        cout << "Grade: A" << endl; 
                    }
                    else if (marks1 >= 70) {
                         cout << "Grade: B" << endl; 
                        }
                    else if (marks1 >= 50) {
                         cout << "Grade: C" << endl; 
                        }
                    else if (marks1 >= 40) {
                         cout << "Grade: D" << endl; 
                        }
                    else { 
                        cout << "Grade: F" << endl; 
                    }
                    found = true;
                }
                else if (student2 == search) {
                    cout << "Student Name: " << student2 << endl;
                    cout << "Marks: " << marks2 << endl;
                    if (marks2 >= 85) { 
                        cout << "Grade: A" << endl;
                     }
                    else if (marks2 >= 70) {
                         cout << "Grade: B" << endl;
                         }
                    else if (marks2 >= 50) { 
                        cout << "Grade: C" << endl;
                     }
                    else if (marks2 >= 40) {
                         cout << "Grade: D" << endl; 
                        }
                    else { 
                        cout << "Grade: F" << endl;
                     }
                    found = true;
                }
                else if (student3 == search) {
                    cout << "Student Name: " << student3 << endl;
                    cout << "Marks: " << marks3 << endl;
                    if (marks3 >= 85) { 
                        cout << "Grade: A" << endl; 
                    }
                    else if (marks3 >= 70) { 
                        cout << "Grade: B" << endl; 
                    }
                    else if (marks3 >= 50) { 
                        cout << "Grade: C" << endl;
                     }
                    else if (marks3 >= 40) {
                         cout << "Grade: D" << endl; 
                        }
                    else { 
                        cout << "Grade: F" << endl;
                     }
                    found = true;
                }
                else if (student4 == search) {
                    cout << "Student Name: " << student4 << endl;
                    cout << "Marks: " << marks4 << endl;
                    if (marks4 >= 85) {
                         cout << "Grade: A" << endl; 
                        }
                    else if (marks4 >= 70) {
                         cout << "Grade: B" << endl; 
                        }
                    else if (marks4 >= 50) {
                         cout << "Grade: C" << endl;
                         }
                    else if (marks4 >= 40) { 
                        cout << "Grade: D" << endl;
                     }
                    else { 
                        cout << "Grade: F" << endl;
                     }
                    found = true;
                }
                else if (student5 == search) {
                    cout << "Student Name: " << student5 << endl;
                    cout << "Marks: " << marks5 << endl;
                    if (marks5 >= 85) {
                         cout << "Grade: A" << endl; 
                        }
                    else if (marks5 >= 70) {
                         cout << "Grade: B" << endl;
                         }
                    else if (marks5 >= 50) {
                         cout << "Grade: C" << endl; 
                        }
                    else if (marks5 >= 40) {
                         cout << "Grade: D" << endl;
                         }
                    else { 
                        cout << "Grade: F" << endl; 
                    }
                    found = true;
                }

                if (!found) {
                    cout << "Student not found" << endl;
                }
            }

            // Option 3: Delete student
            if (input == 3) {
                string delname;
                bool found = false;
                cin.ignore();
                cout << "Enter Student Name to delete : ";
                getline(cin, delname);

                if (student1 == delname) { 
                    student1 = "NV"; marks1 = -1; found = true; 
                }
                else if (student2 == delname) {
                    
                     student2 = "NV"; marks2 = -1; found = true; 
                    }
                else if (student3 == delname) { 
                    student3 = "NV"; marks3 = -1; found = true;
                 }
                else if (student4 == delname) { 
                    student4 = "NV"; marks4 = -1; found = true;
                 }
                else if (student5 == delname) {
                     student5 = "NV"; marks5 = -1; found = true; 
                    }

                if (found) { cout << "Student deleted Successfully" << endl; }
                else { cout << "Student not found" << endl; }
            }

            // Option 4: Update student
            if (input == 4) {
                string update;
                bool found = false;
                cin.ignore();
                cout << "Enter Student Name to update : ";
                getline(cin, update);

                if (student1 == update) {
                    cout << "Student name: " << student1 << endl;
                    cout << "Current marks: " << marks1 << endl;
                    cout << "Enter new marks of " << student1 << ": ";
                    cin >> marks1;
                    found = true;
                    cout << "Student data updated Successfully" << endl;
                }
                else if (student2 == update) {
                    cout << "Student name: " << student2 << endl;
                    cout << "Current marks: " << marks2 << endl;
                    cout << "Enter new marks of " << student2 << ": ";
                    cin >> marks2;
                    found = true;
                    cout << "Student data updated Successfully" << endl;
                }
                else if (student3 == update) {
                    cout << "Student name: " << student3 << endl;
                    cout << "Current marks: " << marks3 << endl;
                    cout << "Enter new marks of " << student3 << ": ";
                    cin >> marks3;
                    found = true;
                    cout << "Student data updated Successfully" << endl;
                }
                else if (student4 == update) {
                    cout << "Student name: " << student4 << endl;
                    cout << "Current marks: " << marks4 << endl;
                    cout << "Enter new marks of " << student4 << ": ";
                    cin >> marks4;
                    found = true;
                    cout << "Student data updated Successfully" << endl;
                }
                else if (student5 == update) {
                    cout << "Student name: " << student5 << endl;
                    cout << "Current marks: " << marks5 << endl;
                    cout << "Enter new marks of " << student5 << ": ";
                    cin >> marks5;
                    found = true;
                    cout << "Student data updated Successfully" << endl;
                }

                if (!found) {
                    cout << "Student not found" << endl;
                }
            }

            // Option 6: Display list without grade
            if (input == 6) {
                cout << "List of all students without grade" << endl;
                cout << "*********************************************************************************" << endl;
                cout << left << setw(20) << "Student Name" << setw(10) << "Marks" << endl;
                cout << "*********************************************************************************" << endl;

                if (student1 != "NV") { cout << left << setw(20) << student1 << setw(10) << marks1 << endl; }
                if (student2 != "NV") { cout << left << setw(20) << student2 << setw(10) << marks2 << endl; }
                if (student3 != "NV") { cout << left << setw(20) << student3 << setw(10) << marks3 << endl; }
                if (student4 != "NV") { cout << left << setw(20) << student4 << setw(10) << marks4 << endl; }
                if (student5 != "NV") { cout << left << setw(20) << student5 << setw(10) << marks5 << endl; }
            }

            // Option 7: Display list with grade
            if (input == 7) {
                cout << "List of all students with grade" << endl;
                cout << "*********************************************************************************" << endl;
                cout << left << setw(20) << "Student Name" << setw(10) << "Marks" << setw(10) << "Grade" << endl;
                cout << "*********************************************************************************" << endl;

                if (student1 != "NV") {
                    string grade;
                    if (marks1 >= 85) { 
                        grade = "A";
                     }
                    else if (marks1 >= 70) {
                         grade = "B";
                         }
                    else if (marks1 >= 50) {
                         grade = "C";
                         }
                    else if (marks1 >= 40) { 
                        grade = "D";
                     }
                    else { 
                        grade = "F";
                     }
                    cout << left << setw(20) << student1 << setw(10) << marks1 << setw(10) << grade << endl;
                }
                if (student2 != "NV") {
                    string grade;
                    if (marks2 >= 85) { 
                        grade = "A"; 
                    }
                    else if (marks2 >= 70) {
                         grade = "B"; 
                        }
                    else if (marks2 >= 50) { 
                        grade = "C";
                     }
                    else if (marks2 >= 40) {
                         grade = "D";
                         }
                    else {
                         grade = "F";
                         }
                    cout << left << setw(20) << student2 << setw(10) << marks2 << setw(10) << grade << endl;
                }
                if (student3 != "NV") {
                    string grade;
                    if (marks3 >= 85) { grade = "A"; }
                    else if (marks3 >= 70) { grade = "B"; }
                    else if (marks3 >= 50) { grade = "C"; }
                    else if (marks3 >= 40) { grade = "D"; }
                    else { grade = "F"; }
                    cout << left << setw(20) << student3 << setw(10) << marks3 << setw(10) << grade << endl;
                }
                if (student4 != "NV") {
                    string grade;
                    if (marks4 >= 85) { grade = "A"; }
                    else if (marks4 >= 70) { grade = "B"; }
                    else if (marks4 >= 50) { grade = "C"; }
                    else if (marks4 >= 40) { grade = "D"; }
                    else { grade = "F"; }
                    cout << left << setw(20) << student4 << setw(10) << marks4 << setw(10) << grade << endl;
                }
                if (student5 != "NV") {
                    string grade;
                    if (marks5 >= 85) { grade = "A"; }
                    else if (marks5 >= 70) {
                         grade = "B"; 
                        }
                    else if (marks5 >= 50) { 
                        grade = "C"; 
                    }
                    else if (marks5 >= 40) {
                         grade = "D"; 
                        }
                    else { 
                        grade = "F";
                     }
                    cout << left << setw(20) << student5 << setw(10) << marks5 << setw(10) << grade << endl;
                }
            }
        }
    }
    else {
        cout << "Invalid user name or password";
    }

    return 0;
}
