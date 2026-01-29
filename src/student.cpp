#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
    id = 0;
    name = "";
    email = "";
}

Student::Student(int i, string n, string e)
{
    id = i;
    name = n;
    email = e;
}

void Student::setId(int i)
{
    id = i;
}

void Student::setName(string n)
{
    name = n;
}

void Student::setEmail(string e)
{
    email = e;
}

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

string Student::getEmail()
{
    return email;
}

void Student::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
}
