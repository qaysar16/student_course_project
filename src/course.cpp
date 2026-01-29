#include "Course.h"
#include <iostream>

using namespace std;

Course::Course()
{
    id = 0;
    title = "";
    duration = 0;
}

Course::Course(int i, string t, int d)
{
    id = i;
    title = t;
    duration = d;
}

int Course::getId()
{
    return id;
}

string Course::getTitle()
{
    return title;
}

int Course::getDuration()
{
    return duration;
}

void Course::display()
{
    cout << "ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Duration: " << duration << " hours" << endl;
}
