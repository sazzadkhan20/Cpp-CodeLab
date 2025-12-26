#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    cout<<"Enter a string: ";
    //getline(cin,line,'a');
    getline(cin,line);
    int total_characters_count=0,alphabets_count=0,digits_count=0,spaces_count=0,other_characters_count=0;
    for(int i=0; i<line.size(); i++)
    {
        total_characters_count++;
        //checking Alphabets
        if((line[i]>=65 && line[i]<=90) || (line[i]>=97 && line[i]<=122))
        {
            alphabets_count++;
        }
        //checking Digits
        else if((line[i]>=48 && line[i]<=57))
        {
            digits_count++;
        }
        //checking Spaces
        else if(line[i]==32)
        {
            spaces_count++;
        }
        //checking other Characters
        else
        {
            other_characters_count++;
        }
    }

    cout<<"\n\nThe number of characters in the string is : "<<total_characters_count;
    cout<<"\n\nThe number of alphabets are : "<<alphabets_count;
    cout<<"\n\nThe number of digits are : "<<digits_count;
    cout<<"\n\nThe number of spaces are : "<<spaces_count;
    cout<<"\n\nThe number of other characters are : "<<other_characters_count;
}
