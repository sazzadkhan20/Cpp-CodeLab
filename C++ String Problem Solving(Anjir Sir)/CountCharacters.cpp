#include<iostream>

using namespace std;


int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    int elementCount;
    cout<<"\n\nThe count of each character in the string "<<s<<" is: \n\n";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='\0'){
            elementCount = 1;
        cout<<s[i]<<"     ";
            for(int j=i+1; j<s.length(); j++)
            {
                if(s[i]==s[j] && s[j]!='\0')
                {
                   elementCount++;
                   s[j]='\0' ;
                }
            }
            cout<<elementCount<<endl<<endl<<endl;
        }

     }
}


