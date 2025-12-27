#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
class Student
{
public:
    string name;
    int cls, id, mathMarks, engMarks;
    char section;
    Student()
    {
    }
    Student(string name, int cls, char section, int id, int mathMarks, int engMarks)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
        this->mathMarks = mathMarks;
        this->engMarks = engMarks;
    }
    void showInfo()
    {
        cout << this->name << " " << this->cls << " " << this->section << " " << this->id << " " << this->mathMarks << " " << this->engMarks << endl;
    }
};

bool compare(Student l, Student r)
{
    if (l.engMarks == r.engMarks)
    {
        if (l.mathMarks == r.mathMarks)
            return l.id <= r.id;
        else
            return l.mathMarks > r.mathMarks;
    }
    else
        return l.engMarks > r.engMarks;
}

int main()
{
    int n;
    cin >> n;
    Student students[N];
    for (int i = 0; i < n; i++)
    {
        string name;
        int cls, id, mathMarks, engMarks;
        char section;
        cin >> name >> cls >> section >> id >> mathMarks >> engMarks;
        students[i] = Student(name, cls, section, id, mathMarks, engMarks);
    }
    sort(students, students + n, compare);
    for (int i = 0; i < n; i++)
    {
        students[i].showInfo();
    }
}