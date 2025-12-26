#include<iostream>

using namespace std;

int studentsNum = 5;

struct student
{
    int day;
    int studentId [5];
    bool isPresent [5];
};

int main()
{
    int m;
    cout<<"\n\nEnter Class Num: ";
    cin>>m;
    student s[m];
    float attendentCount [studentsNum]={0.0};
    for(int i=0; i<m; i++)
    {
        cout<<"Day -"<<i+1<<" Attendence List(If Student present input 1 otherwise input 0) : \n\n";
        s[i].day = i+1;
        for(int j=0; j<studentsNum; j++)
        {
           cout<<"Student Id: "<<j+1;
           s[i].studentId[j] = j+1;
           cout<<"\n\nInput Attendence :";
           cin>>s[i].isPresent[j];
        }
    }

   for(int i=0; i<m; i++)
    {
        for(int j=0; j<studentsNum; j++)
        {
           attendentCount[j]+= s[i].isPresent[j];
        }
    }
    cout<<"\n\nAttendence less than 75% students Id are: ";
    for(int i=0; i<studentsNum; i++)
    {
       attendentCount[i] = attendentCount[i]/3;
       if(attendentCount[i]<0.75)
       {
           cout<<i+1<<"  ";
       }
    }
}
