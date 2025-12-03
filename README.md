🎓 University Management Systems (C++)

This repository contains two console-based C++ applications developed for university-level data management:

University Grading System – manages students, marks, grades, searching, deleting, updating, and saving.

University Learning Management System (LMS) – manages courses, semesters, credit hours, and authenticated users.

Both programs use arrays, file handling, basic authentication, and menu-driven structures to simulate real-world educational systems.

📌 1. University Grading System

A simple C++ program that allows the administrator to:

✅ Features

Add a student (name + marks)

Search a student by name

Delete a student

Update marks of a student

Display number of students

Display students with or without grades

Auto-generate grade (A, B, C, D, F)

Save all data to a text file (first.txt)

Admin login (username: Administrators, password: PF2025)

🛠 Tech Used

Arrays

getline() for names

File handling (ofstream)

Conditional branching

Menu-based loop

📌 2. University Learning Management System (Courses)

This system handles course registration and retrieval for 8 semesters.

✅ Features

Add a course

Edit course details

Delete a course

View all courses

View courses by semester

Input validations:

Course code format (e.g., CS101)

Credit hours (1–3)

Semester number (1–8)

Course name validation

Save courses to Courses.txt

Load courses from file

User authentication using Users.txt

🛠 Tech Used

Arrays for course storage

Complete input validation

File I/O using fstream

Menu-driven interface

Separate functions for each operation

🗂 Project Structure
/University-Management-System
│
├── GradingSystem.cpp
├── LMS_Courses.cpp
├── Courses.txt
├── Users.txt
├── first.txt
└── README.md

▶️ How to Run
Compile using g++
g++ GradingSystem.cpp -o grading
g++ LMS_Courses.cpp -o lms

Run the program
./grading
./lms

🔒 Login Information
For Grading System:

Username: Administrators

Password: PF2025

For LMS System:

Credentials must be stored inside Users.txt in this format:

username,password
admin,1234
teacher,abcd

💾 File Outputs

The systems generate or read the following files:

first.txt → saved student list with grades

Courses.txt → saved course information

Users.txt → login data for LMS system

🤝 Contributing

Suggestions, improvements, and pull requests are welcome.

📄 License

This project is open-source under the MIT License.
