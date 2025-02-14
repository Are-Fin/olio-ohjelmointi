#include "student.h"

Student::Student(string sName, int sAge) {
    name = sName;
    age = sAge;
}

void Student::setAge(int nAge)
{
    age = nAge;
}

void Student::setName(string nName)
{
    name = nName;
}

int Student::getAge()
{
    return age;
}

string Student::getName()
{
    return name;
}

void Student::printStudentInfo()
{
    cout << "Student name: " << name << " | Age: " << age << endl;
}
