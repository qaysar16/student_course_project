#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    string email;

public:
    Student();
    Student(int i, string n, string e);

    void setId(int i);
    void setName(string n);
    void setEmail(string e);

    int getId();
    string getName();
    string getEmail();

    void display();
};

#endif
