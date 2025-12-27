#include <bits/stdc++.h>

using namespace std;
const int N = 105;
class Student
{
public:
    string name;
    int cls, id;
    char section;
    Student()
    {
    }
    Student(string name, int cls, char section, int id)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
    }
    void showInfo()
    {
        cout << this->name << " " << this->cls << " " << this->section << " " << this->id << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    Student students[N];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(students[i].section, students[j].section);
        i++, j--;
    }
    for (int i = 0; i < n; i++)
    {
        students[i].showInfo();
    }
}