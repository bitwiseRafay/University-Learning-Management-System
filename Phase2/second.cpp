#include <iostream>
#include <cctype>
using namespace std;

// ===== Validation functions =====

// Course Code: 2 letters + 3 digits
bool isValidCourseCode(string code) {
    if (code.length() != 5) return false;
    if (!isalpha(code[0]) || !isalpha(code[1])) return false;
    if (!isdigit(code[2]) || !isdigit(code[3]) || !isdigit(code[4])) return false;
    return true;
}

// Course Name: only letters and spaces, max 50 chars
bool isValidCourseName(string name) {
    if (name.length() == 0 || name.length() > 50) return false;
    for (int i = 0; i < name.length(); i++) {
        if (!isalpha(name[i]) && !isspace(name[i])) return false;
    }
    return true;
}

// Credit hours: must be between 1 and 4
bool isValidCreditHours(int h) {
    return (h >= 1 && h <= 4);
}

// Semester: must be between 1 and 8
bool isValidSemister(int s) {
    return (s >= 1 && s <= 8);
}

// ===== Add Course Function =====
void addCourse(){ 
    string courseName[8] = {"","","","","","","",""};
    string courseCode[8] = {"","","","","","","",""};
    int semisterNO[8] = {0,0,0,0,0,0,0,0};
    int creditHour[8] = {0,0,0,0,0,0,0,0};

    cout << "Enter the details of the course:\n";
    bool isAvailable = false;

    for (int i = 0; i < 8; i++) {
        if (courseName[i] == "") {
            cout << "\nEnter Course Code (e.g., CS101): ";
            cin >> courseCode[i];
            cout << "Enter Credit Hours (1-4): ";
            cin >> creditHour[i];
            cout << "Enter Semester Number (1-8): ";
            cin >> semisterNO[i];
            cin.ignore(); // clear leftover newline
            cout << "Enter Course Name: ";
            getline(cin, courseName[i]); // allows spaces

            bool isValideCode = isValidCourseCode(courseCode[i]);
            bool isValidName = isValidCourseName(courseName[i]);
            bool isValidHours = isValidCreditHours(creditHour[i]);
            bool isValidSemi = isValidSemister(semisterNO[i]);

            if (!isValideCode || !isValidName || !isValidHours || !isValidSemi) {
                cout << "❌ Invalid Details Entered!\n";
                courseCode[i] = "";
                creditHour[i] = 0;
                courseName[i] = "";
                semisterNO[i] = 0;
                break;
            }

            cout << "✅ Course Added Successfully!\n";
            isAvailable = true;
            break;
        }
    }

    if (!isAvailable) {
        cout << "⚠️ No empty slot available!\n";
    }
}