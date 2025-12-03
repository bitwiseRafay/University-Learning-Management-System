#include <bits/stdc++.h>
using namespace std;
//Global strings for course code,course name,semester no,credit hour
string courseName[8] = {"", "", "", "", "", "", "", ""};
string courseCode[8] = {"", "", "", "", "", "", "", ""};
int semisterNO[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int creditHour[8] = {0, 0, 0, 0, 0, 0, 0, 0};
//function to print menu
int menu()
{
  int option;
  cout << "** Welcome to University Learning Management System **" << endl
       << "Choose the following option" << endl
       << "1 Add Course" << endl
       << "2 Update Course " << endl
       << "3 Delete Course " << endl
       << "4 View All Courses " << endl
       << "5 View Courses of a Semester " << endl
       << "0  Exit Program  " << endl;

  cout << "Choose the option :";

  cin >> option;
  return option;
}
//to check validity of code
bool isValidCourseCode(string courseCode)
{
  if (courseCode.length() != 5)
  {
    return false;
  }
  if ((isalpha(courseCode[0]) && isalpha(courseCode[1])) && (isdigit(courseCode[2]) && isdigit(courseCode[3]) && isdigit(courseCode[4])))
  {
    return true;
  }
  return false;
}
bool isValidCourseName(string courseName)
{
  if (courseName.length() == 0 || courseName.length() > 50)
  {
    return false;
  }
  for (int i = 0; i < courseName.length(); i++)
  {
    if (!isalpha(courseName[i]) && !isspace(courseName[i]))
    {
      return false;
    }
  }
  return true;
}
bool isValidCreditHours(int creditHours)
{
  if (creditHours < 1 || creditHours > 3)
  {
    return false;
  }
  return true;
}
bool isValidSemister(int semister)
{
  if (semister < 1 || semister > 8)
  {
    return false;
  }
  return true;
}
void addCourse()
{

  cout << "Enter the details of the course :";
  bool isAvailable = false;
  for (int i = 0; i < 8; i++)
  {
    bool isValideCode, isValidName, isValidHours, isValidSemi;
    if (courseName[i] == "")
    {
      cout << "Enter Course Code (e.g. CS101): ";
      cin >> courseCode[i];
      cout << "Enter Credit Hours (1-3): ";
      cin >> creditHour[i];
      cout << "Enter Semester No (1-8): ";
      cin >> semisterNO[i];
      cin.ignore();
      cout << "Enter Course Name: ";
      getline(cin, courseName[i]);

      isValideCode = isValidCourseCode(courseCode[i]);
      isValidName = isValidCourseName(courseName[i]);
      isValidHours = isValidCreditHours(creditHour[i]);
      isValidSemi = isValidSemister(semisterNO[i]);
      if (!isValideCode || !isValidName || !isValidHours || !isValidSemi)
      {
        cout << "Invalid Detail";
        courseCode[i] = "";
        creditHour[i] = 0;
        courseName[i] = "";
        semisterNO[i] = 0;
        return;
      }
      isAvailable = true;
      cout << "Course Added Succesfully ";
      break;
    }
  }

  if (!isAvailable)
  {
    cout << "NO empty space found ";
  }
}
void EditCourse()
{
  string courseCodeEdit;
  cout << "Enter Course Code :";
  cin >> courseCodeEdit;
  bool isFound = false;
  for (int i = 0; i < 8; i++)
  {
    if (courseCodeEdit == courseCode[i])
    {
      cout << "Enter New Course Code (e.g. CS101): ";

      cin >> courseCode[i];
      cout << "Enter Credit Hours (1-3): ";
      cin >> creditHour[i];
      cout << "Enter Semester No (1-8): ";
      cin >> semisterNO[i];
      cin.ignore();
      cout << "Enter Course Name: ";
      getline(cin, courseName[i]);
      cout << "Course updated Successfully \n";
      isFound = true;
      return;
    }
  }
  if (!isFound)
  {
    cout << "Course not found";
  }
}
void DeleteCourse()
{
  string courseCodeDel;
  cout << "Enter Course Code :";
  cin >> courseCodeDel;
  bool isFound = false;
  for (int i = 0; i < 8; i++)
  {
    if (courseCodeDel == courseCode[i])
    {
      courseCode[i] = "";
      creditHour[i] = 0;
      semisterNO[i] = 0;
      courseName[i] = "";

      isFound = true;
      return;
    }
  }
  if (!isFound)
  {
    cout << "Course not found";
  }
}
void ViewCourses()
{
  cout << setw(20) << left << "Course Code" << setw(20) << "Name" << setw(20) << "Credit Hours" << setw(20) << "semister" << endl;
  for (int i = 0; i < 8; i++)
  {
    if (courseCode[i] != "")
    {
      cout << setw(20) << left << courseCode[i] << setw(20) << courseName[i] << setw(20) << creditHour[i] << setw(20) << semisterNO[i] << endl;
    }
  }
}
void ViewSemesterCourses()
{
  int sem;
  cout << "Enter semister no :";
  cin >> sem;
  if (!isValidSemister(sem))
  {
    cout << "Invalid SemisterNo";
    return;
  }
  bool isFound = false;
  cout << setw(20) << left << "Course Code" << setw(20) << "Name" << setw(20) << "Credit Hours" << endl;
  for (int i = 0; i < 8; i++)
  {
    if (courseCode[i] != "" && semisterNO[i] == sem)
    {
      isFound = true;
      cout << setw(20) << left << courseCode[i] << setw(20) << courseName[i] << setw(20) << creditHour[i] << endl;
    }
  }
  if (!isFound)
  {
    cout << "No courses found for semester " << sem << endl;
  }
}
bool saveCourse()
{
  ofstream outstream("Courses.txt");
  if (!outstream)
  {
    return false;
  }
  for (int i = 0; i < 8; i++)
  {
    if (courseCode[i] != "")
    {
      outstream << courseCode[i] << ","
                << courseName[i] << ","
                << creditHour[i] << ","
                << semisterNO[i] << endl;
    }
  }
  outstream.close();
  return true;
}
bool loadCourses()
{
  ifstream inFile("Courses.txt");
  if (!inFile)
  {
    return false;
  }
  for (int i = 0; i < 8 && !inFile.eof(); i++)
  {
    string code, name;
    int credit, sem;
    getline(inFile, code, ',');
    getline(inFile, name, ',');
    inFile >> credit;
    inFile.ignore();
    inFile >> sem;
    inFile.ignore();
    if (code == "" || name == "")
    {
      break;
    }
    courseCode[i] = code;
    courseName[i] = name;
    creditHour[i] = credit;
    semisterNO[i] = sem;
  }
  inFile.close();
  return true;
}
bool loadUsers()
{
  string userName;
  string password;
  cout << "** Welcome to University Learning Management System **   " << endl
       << "Dear User, current software is intended for authorized users only."
       << "  Login to the system to get access." << endl;
  cout << "Enter User Name :";
  cin >> userName;
  cout << "Enter Password :";
  cin >> password;

  string usersList[100];
  string userPassword[100];
  ifstream inFile("Users.txt");
  if (!inFile)
  {
    cout << "Sorry, we are unable to run the program, as user data does not exist.";
    return false;
  }
  for (int i = 0; i < 100 && !inFile.eof(); i++)
  {
    getline(inFile, usersList[i], ',');
    inFile >> userPassword[i];
    inFile.ignore();
  }
  bool isRight = false;
  for (int i = 0; i < 100; i++)
  {

    if (usersList[i] == userName && userPassword[i] == password)
    {
      isRight = true;
      return true;
    }
  }
  if (!isRight)
  {
    cout << "Wrong User name or password" << endl;
    return false;
  }
}
int main()
{
  while(true){
  bool isTrue = loadUsers();
  int option;
  if (!isTrue)
  {
    bool isTrue = loadUsers();
  }
  while (isTrue)
  {
    option = menu();

    if (option == 1)
    {
      addCourse();
    }
    else if (option == 2)
    {
      EditCourse();
    }
    else if (option == 3)
    {
      DeleteCourse();
    }
    else if (option == 4)
    {
      ViewCourses();
    }
    else if (option == 5)
    {
      ViewSemesterCourses();
    }
    else if (option == 0)
    {
      bool isSave;
      isSave = saveCourse();
      if (isSave)
      {
        cout << "Course data saved successfully in Course.txt";
      }
      else
      {
        cout << "We appologize course data does not save";
      }
      break;
    }
    else
    {
      cout << "Invalid option!\n";
    }
    cout << endl;
  }

  cout << "Program exited.\n";
}
  return 0;
}