#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name;
    string id;
    int age;
    ofstream file;
    //file.open("student.txt",ios::out|ios::app);
    while(1)
    {
        file.open("student.txt",ios::out|ios::app);
        cout<<"\n\nEnter Your Name: ";
        getline(cin,name);

        file<<name<<"/";

        cout<<"\n\nEnter Your ID: ";
        getline(cin,id);

        file<<id<<"/";

        cout<<"\n\nEnter Your Age: ";
        cin>>age;

        file<<age<<"\n";
        file.close();
        cin.ignore();
    }

}
