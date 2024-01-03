
#include <iostream>

using namespace std;

class Student
{
public:
    string course;
    string name;
    int id;
    int semeaster;
    double cgpa;

    Student(string _name, int _id, int _semeaster, string _course, double _cgpa)
    {
        name = _name;
        id = _id;
        semeaster = _semeaster;
        course = _course;
        cgpa = _cgpa;

        if(course == "CSE")
        {
            cout << "Name : " << name << endl << "ID : " << id << endl << "Semeaster : " << semeaster << endl;
        }
        else if(course == "ECSE")
        {
            cout << "Name : " << name << endl << "ID : " << id << endl << "Semeaster : " << semeaster << endl << "CGPA : " << cgpa << endl;
        }
    }
};

int main()
{

    Student cse("Tamanna", 287, 3, "CSE", 4.00);
    cout << endl;
    Student ecse("Tamanna", 287, 3, "ECSE", 4.00);
}
