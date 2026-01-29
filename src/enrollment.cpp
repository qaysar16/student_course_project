#include "Enrollment.h"
#include <iostream>

using namespace std;

Enrollment::Enrollment()
{
    id = 0;
    studentId = 0;
    courseId = 0;
}

Enrollment::Enrollment(int i, int sId, int cId)
{
    id = i;
    studentId = sId;
    courseId = cId;
}

int Enrollment::getId()
{
    return id;
}

int Enrollment::getStudentId()
{
    return studentId;
}

int Enrollment::getCourseId()
{
    return courseId;
}

void Enrollment::display()
{
    cout << "Enrollment ID: " << id << endl;
    cout << "Student ID: " << studentId << endl;
    cout << "Course ID: " << courseId << endl;
}
