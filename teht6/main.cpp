#include <iostream>
#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string name = "null";
            int age = 0;
            cout << "-+-Add student-+-" << endl;
            cout << "Student name: "; cin >> name;
            cout << "Student age: "; cin >> age;

            Student student(name, age);
            studentList.push_back(student);
            cout << "Added student " << student.getName() << endl;

            break;
        }
        case 1: {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "-+-Printing all student names-+-" << endl;
            for (auto s: studentList){
                cout << s.getName() << endl;
            }
            break;
        }
        case 2: {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "-+-Sorting and printing students by name-+-" << endl;
            sort(studentList.begin(), studentList.end(),[](auto &a, auto &b){
                return a.getName().compare(b.getName()) < 0;
            });
            for (auto s: studentList){
                s.printStudentInfo();
            }
            break;
        }
        case 3:{
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "-+-Sorting and printing students by age-+-" << endl;
            sort(studentList.begin(), studentList.end(), [](auto &a, auto &b){
                return a.getAge() < b.getAge();
            });
            for (auto s: studentList){
                s.printStudentInfo();
            }
            break;
        }
        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string nimi;
            cout << "-+-Find and print student-+-" << endl;
            cin >> nimi;

            auto it = find_if(studentList.begin(), studentList.end(), [nimi](auto &a){
                return a.getName() == nimi;
            });
            if(it != studentList.end()){
                it->printStudentInfo();
            } else {
                cout << "Couldn't find a student named " << nimi << endl;
            }
            break;
        }
        default:{
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    }

    }while(selection <= 4);

    return 0;
}



