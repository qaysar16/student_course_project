#ifndef ENROLLMENT_H
#define ENROLLMENT_H

class Enrollment
{
private:
    int id;
    int studentId;
    int courseId;

public:
    Enrollment();
    Enrollment(int i, int sId, int cId);

    int getId();
    int getStudentId();
    int getCourseId();

    void display();
};

#endif

