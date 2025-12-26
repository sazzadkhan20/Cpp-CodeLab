#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string line;

    ifstream file;
    //ifstream file("student.txt");

    file.open("student.txt");

    /*getline(file,line);
    cout<<line<<endl;
    getline(file,line);
    cout<<line<<endl;*/


    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();

}
