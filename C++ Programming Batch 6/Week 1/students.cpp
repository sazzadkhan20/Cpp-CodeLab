#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
    Student()
    {
    }
    Student(int id, char n[], char section, int totalMarks)
    {
        this->id = id;
        strcpy(this->name, n);
        this->section = section;
        this->totalMarks = totalMarks;
    }
    void showInfo()
    {
        cout << this->id << " " << this->name << " " << this->section << " " << this->totalMarks << endl;
    }
};

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        Student s;
        int temp = -1;
        for (int i = 0; i < 3; i++)
        {
            int id;
            char name[101];
            char section;
            int totalMarks;
            cin >> id >> name >> section >> totalMarks;
            Student obj = Student(id, name, section, totalMarks);
            if (temp < totalMarks)
            {
                s = obj;
                temp = totalMarks;
            }
        }
        s.showInfo();
    }

    return 0;
}
