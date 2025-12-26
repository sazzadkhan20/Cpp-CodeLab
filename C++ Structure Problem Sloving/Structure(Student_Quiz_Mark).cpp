#include<iostream>

using namespace std;

struct student
{
    int sid;
    string name;
    int marks[3];
    void display_sid(){
        cout<<"Sname- "<<name<<",Id- "<<sid<<endl;
    }
};

int main()
{
    student s[5];
    cout<<"\n\nPlease Enter 2 Students Details(Unique Id Required)--\n\n ";
    for(int i=0; i<2; i++)
    {
        cout<<"\n\n"<<i+1<<" Number of Student Id : ";
        cin>>s[i].sid;
        cin.ignore();
        cout<<"\n\n"<<i+1<<" Number of Name : ";
        getline(cin,s[i].name);
        cout<<"\n\n"<<i+1<<" Number of Student Quiz marks : ";
        for(int j=0; j<3; j++)
        {
           cin>> s[i].marks[j];
        }
    }
    int temp;
    int tempIndex;
    for(int i=0; i<2; i++)
    {
        s[i].display_sid();
        cout<<"\n\nBest Quiz Marks: ";
        temp =s[i].marks[0];
        tempIndex = 0;
        for(int j=0; j<3; j++)
        {
            if(temp>s[i].marks[j])
            {
               temp =  s[i].marks[j];
               tempIndex = j;
            }
        }
        for(int j=0; j<3; j++)
        {
            if(tempIndex!=j)
            {
               cout<<  s[i].marks[j]<<"  ";
            }
        }
    }
}

