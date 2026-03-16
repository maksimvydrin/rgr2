#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int age;
    float grade;

    Student(string n, int a, float g)
    {
        name = n;
        age = a;
        grade = g;
    }

    void print()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Grade:" << grade << endl;
    }
};

vector<Student> students;

void addStudent(string name, int age, float grade)
{
    Student s(name, age, grade);
    students.push_back(s);
}

void printStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        students[i].print();
    }
}

float averageGrade()
{
    float sum = 0;
    for (int i = 0; i < students.size(); i++)
    {
        sum = sum + students[i].grade;
    }
    return sum / students.size();
}

int main()
{

    addStudent("Anna", 20, 4.5);
    addStudent("John", 21, 3.9);
    addStudent("Mike", 19, 4.8);

    printStudents();

    cout << "Average:" << averageGrade() << endl;

    int unused = 10;
}