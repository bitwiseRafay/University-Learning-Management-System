#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    string user, password;
    int input;
    string student[5];
    int marks[5];

    for (int i = 0; i < 5; i++) {
        student[i] = "NV";
        marks[i] = -1;
    }

    cout<< "Enter your username :";
    cin >> user;
    cout << "Enter your password :";
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
            cout<<"Enter 8 to save data"<<endl;
            cout << "Enter 0 to close program" << endl;
            cout << "Enter Input between 0-7" << endl;
            cin >> input;
            if (input > 8 || input < 0) {
                cout << "Invalid input" << endl;
                continue;
            }
            if (input == 0) {
                cout << "Program closed Successfully" << endl;
                break;
            }
            //fifth option to display number of students
            if (input == 5) {
                int count = 0;
                for (int i = 0; i < 5; i++) {
                    if (student[i] != "NV") {
   count++;
}
 }
                cout << "Number of students in the system: " << count << endl;
            }
            //First option to add student  
            if(input == 1){
                int index = -1;
                for(int i = 0; i < 5; i++){
                    if(student[i]=="NV"){
                        index=i;
                        break; 
                    }
                }
                if(index == -1){
                    cout<<"Sorry,No more student can be added"<<endl;
                }
                else{
                    cout<<"Enter Student Name :";
                    cin.ignore();
                    getline(cin,student[index]);         //for space in name
                    cout<<"Enter Marks :";
                    cin>>marks[index];
                    cout<<"Student added Successfully"<<endl;
                }
            }
            //Second option to search student
            if(input == 2){
                string search;
                bool found = false;
                cout << "Enter Student Name to search :";
                cin.ignore();
                getline(cin,search);
                for(int i = 0; i < 5; i++){
                    if(student[i] == search){
                        string grade;
                        cout<<"student Name: "<<student[i]<<endl;
                        cout << "Marks: " << marks[i] << endl;
                        if(marks[i] >= 85){
                            grade = "A";
                        } else if(marks[i] >= 70){
                            grade = "B";
                        } else if(marks[i] >= 50){
                            grade = "C";
                        } else if(marks[i] >= 40){
                            grade = "D";
                        } else {
                            grade = "F";
                    }
                    cout<<"Grade: "<<grade<<endl;
                    found = true;
                    break;
                    }
                    if(!found){
                        cout<<"Student not found"<<endl;
                    }
                } 
            }
            //Third option to delete student
            if(input == 3){
                string delname;
                bool found = false;
                cout << "Enter Student Name to delete :";
                cin.ignore();
                getline(cin,delname);               
                for(int i = 0; i < 5; i++){
                    if(student[i] == delname){
                        student[i] = "NV";
                        marks[i] = -1;
                        cout<<"Student deleted Successfully"<<endl;
                        found = true;
                        break;
                    }
                    if(!found){
                        cout<<"Student not found"<<endl;
                    }
                } 
            }
            //Fourth option to update student data
            if(input == 4){
                string update;
                bool found = false;
                cout << "Enter Student Name to update :";
                cin.ignore();
                getline(cin,update);
                for(int i = 0; i < 5; i++){
                    if(student[i] == update){
                        cout<<"Student name: "<<student[i]<<endl;
                        cout<<"Current marks: "<<marks[i]<<endl;
                     cout<<"Enter new marks of "<<student[i];
                     cin>>marks[i];
                        cout<<"Student data updated Successfully"<<endl;
                        found = true;
                        break;
                    }
                    if(!found){
                        cout<<"Student not found"<<endl;
                    }
                }    
            }
            //Sixth option to display list of all students without grade
            if(input == 6){
                    cout<<"List of all students without grade"<<endl;
                    for(int i = 0; i < 5; i++){
                        if(student[i] != "NV"){ 
cout << "*********************************************************************************" << endl;                          
                  cout << left << setw(20) << "Student Name" << setw(10) << "Marks" << endl;
                  cout << "*********************************************************************************" << endl;
                            cout << left << setw(20) << student[i] << setw(10) << marks[i] << endl;
                        }
                    }
                }
                //Seventh option to display list of all students with grade
                if(input == 7){
                    cout<<"List of all students with grade"<<endl;
                    cout << "*********************************************************************************" << endl;                          
                  cout << left << setw(20) << "Student Name" << setw(10) << "Marks" << setw(10) << "Grade" << endl;
                  cout << "*********************************************************************************" << endl;
                    for(int i = 0; i < 5; i++){
                        if(student[i] != "NV"){
                            string grade;
                            if(marks[i] >= 85){
                                grade = "A";
                            } else if(marks[i] >= 70){
                                grade = "B";
                            } else if(marks[i] >= 50){
                                grade = "C";
                            } else if(marks[i] >= 40){
                                grade = "D";
                            } else {
                                grade = "F";
                            }
                            cout << left << setw(20) << student[i] << setw(10) << marks[i] << setw(10) << grade << endl;
                        }
                    }
                }
                //Eighth option to save data 
                if(input == 8){
                    ofstream fout;
                    fout.open("first.txt");
                    fout<<"List of all students with grade"<<endl;
                    fout << "*********************************************************************************" << endl;                          
                  fout << left << setw(20) << "Student Name" << setw(10) << "Marks" << setw(10) << "Grade" << endl;
                  fout << "*********************************************************************************" << endl;
                    for(int i = 0; i < 5; i++){
                        if(student[i] != "NV"){
                            string grade;
                            if(marks[i] >= 85){
                                grade = "A";
                            } else if(marks[i] >= 70){
                                grade = "B";
                            } else if(marks[i] >= 50){
                                grade = "C";
                            } else if(marks[i] >= 40){
                                grade = "D";
                            } else {
                                grade = "F";
                            }
                            fout << left << setw(20) << student[i] << setw(10) << marks[i] << setw(10) << grade << endl;
                        }
                    }
                    fout.close();
                    cout<<"Student data saved to first.txt"<<endl;
                }
        }
    } else {
        cout << "Invalid user name or password";
    }
    return 0;
}

