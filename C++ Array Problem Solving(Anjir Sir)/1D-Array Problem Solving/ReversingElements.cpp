#include<iostream>
#include<iomanip>//include heading for setw()

int addnumbers(int x,int y)
{

}

using namespace std;

int main()
{
    /**
    * addnumbers function will add 2 numbers
    * @param {number} x -first number
    * @param {number} y -second number
    */
    int length;
    cout<<"Enter a Array Length: ";
    cin>>setw(10)>>right>>length;
    int arr[length];
    cout<<"\n""Enter "<<length<<" number of array Elements: \n";
    for(int i=0; i<length; i++)
    {
        cin>>left>>setfill(' ')>>setw(50)>>arr[i];
        if(i==length-1)
        {
            cout<<"\nThe Reversing of array Elements are: ";
            for(int j=length-1; j>=0; j--)
            {
                cout<<setw(5)<<arr[j];
            }
        }
        //addnumbers()

    }
}

/*#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double number1=113.1258;
    cout<<"Here fixed used :"<<setprecision(2)<<fixed<<number1<<endl;
    cout<<"Here fixed used :"<<scientific<<number1<<endl;

    cout<<"Here left used :"<<left<<setw(10)<<number1<<endl;
    cout<<"Here right used :"<<right<<setw(50)<<number1<<endl;
    cout<<"Here setfill() used :"<<setfill('-')<<left<<setw(50)<<"Hello"<<endl;

}*/

