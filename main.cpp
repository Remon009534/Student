#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string studentId;
    string studentName;
    string studentHeight;

    public:
    void setstudentId(string d)
    {
        studentId = d;
    }
    string getstudentId()
    {
        return studentId;
    }
    void setstudentName(string n)
    {
        studentName = n;
    }
    string getstudentName()
    {
        return studentName;
    }
    void setstudentHeight(string h)
    {
        studentHeight = h;
    }
    string getstudentHeight()
    {
        return studentHeight;
    }
};
int main()
{


    Student h1[5];
  

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a student name:- ";
        string n;
        cin >> n;
        h1[i].setstudentName(n);
        
        cout << "Enter a student id:- ";
        string d;
        cin >> d;
        h1[i].setstudentId(d);

        cout << "Enter a student height:- ";
        string h;
        cin >> h;
        h1[i].setstudentHeight(h);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "Name:- " << h1[i].getstudentName() << "\n";
        cout << "ID:- " << h1[i].getstudentId() << "\n";
        cout << "Height:- " << h1[i].getstudentHeight() << "\n";
    }


    return 0;    
}
