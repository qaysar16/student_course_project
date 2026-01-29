#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course
{
private:
    int id;
    string title;
    int duration;

public:
    Course();
    Course(int i, string t, int d);

    int getId();
    string getTitle();
    int getDuration();

    void display();
};

#endif

