#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Enrollment.h"

using namespace std;

const int MAX = 100;

Student students[MAX];
Course courses[MAX];
Enrollment enrollments[MAX];

int studentCount = 0;
int courseCount = 0;
int enrollmentCount = 0;

/* Functions */

void addStudent();
void addCourse();
void enrollStudent();
void showStudents();
void showCourses();
void showEnrollments();

int main()
{
    int choice;

    do
    {
        cout << endl;
        cout << " Student Registration System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Add Course" << endl;
        cout << "3. Enroll Student" << endl;
        cout << "4. Show Students" << endl;
        cout << "5. Show Courses" << endl;
        cout << "6. Show Enrollments" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            addCourse();
            break;

        case 3:
            enrollStudent();
            break;

        case 4:
            showStudents();
            break;

        case 5:
            showCourses();
            break;

        case 6:
            showEnrollments();
            break;

        case 0:
            cout << "Good Bye!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}

/* Add Student */

void addStudent()
{
    int id;
    string name;
    string email;

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Email: ";
    getline(cin, email);

    students[studentCount] = Student(id, name, email);
    studentCount++;

    cout << "Student Added Successfully!" << endl;
}

/* Add Course */

void addCourse()
{
    int id;
    string title;
    int duration;

    cout << "Enter Course ID: ";
    cin >> id;

    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter Duration: ";
    cin >> duration;

    courses[courseCount] = Course(id, title, duration);
    courseCount++;

    cout << "Course Added Successfully!" << endl;
}

/* Enroll Student */

void enrollStudent()
{
    int id;
    int studentId;
    int courseId;

    cout << "Enter Enrollment ID: ";
    cin >> id;

    cout << "Enter Student ID: ";
    cin >> studentId;

    cout << "Enter Course ID: ";
    cin >> courseId;

    enrollments[enrollmentCount] =
        Enrollment(id, studentId, courseId);

    enrollmentCount++;

    cout << "Student Enrolled Successfully!" << endl;
}

/* Show Students */

void showStudents()
{
    cout << endl << "Students List:" << endl;

    for (int i = 0; i < studentCount; i++)
    {
        students[i].display();
        cout << "===========" << endl;
    }
}

/* Show Courses */

void showCourses()
{
    cout << endl << "Courses List:" << endl;

    for (int i = 0; i < courseCount; i++)
    {
        courses[i].display();
        cout << "===========" << endl;
    }
}

/* Show Enrollments */

void showEnrollments()
{
    cout << endl << "Enrollments List:" << endl;

    for (int i = 0; i < enrollmentCount; i++)
    {
        enrollments[i].display();
        cout << "============" << endl;
    }
}
