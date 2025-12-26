#include<iostream>

using namespace std;

int main()
{
    int lengthOfArray;
    cout<<"\n\nEnter the length of the Array: ";
    cin>>lengthOfArray;
    int arr[lengthOfArray];
    cout<<"\n\nPlease Enter the Elements of the Array: \n\n";

    for(int i=0; i<lengthOfArray; i++)
    {
        cin>>arr[i];
    }
    int missingNumber = arr[0];
    for(int i=1; i<lengthOfArray; i++)
    {
       missingNumber ^= arr[i];
    }
    for(int i=1; i<=lengthOfArray+1; i++)
    {
        missingNumber ^=i;
    }

    cout<<"\n\nMissing Number is: "<<missingNumber;
}
/*#include <iostream>

using namespace std;


int main() {
    int num1,num2;
    cout<<"\n\nEnter Number-1: ";
    cin>>num1;
    cout<<"\n\nEnter Number-2: ";
    cin>>num2;

   /* using Addition and Substraction
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;*/

    //Using Bitwise XOR Operator
   /* num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1^ num2;

    cout<<"\n\nAfter Swaping Two Numbers Numbers are: "<<num1<<" || "<<num2;

}*/

