#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int number1,number2;
    vector <int> dynamicArray1;
    vector <int> dynamicArray2;
    cout<<"\n\nEnter First Array Length: ";
    cin>>number1;
    cout<<"\n\nEnter First Array Elements: \n\n";

    for(int i=0; i<number1; i++)
    {
        int number;
        cin>>number;
        dynamicArray1.push_back(number);
    }
    cout<<"\n\nEnter Second Array Length: ";
    cin>>number2;
    cout<<"\n\nEnter Second Array Elements: \n\n";

    for(int i=0; i<number2; i++)
    {
        int number;
        cin>>number;
        dynamicArray2.push_back(number);
    }
    if(number1!=number2)
    {
        cout<<"\n\nArray Size should be Same";
        return 0;
    }
    vector <int> mergingTwoDynamicArray(number1);
    for(int i=0; i<number1; i++)
    {
        mergingTwoDynamicArray[i]=dynamicArray1[i]+dynamicArray2[i];;
    }
    cout<<"\n\nAfter Adding Elements Array Elements are: ";
    for(int num : mergingTwoDynamicArray)
    {
        cout<<"  "<<num;
    }
}


/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int number1,number2;
    vector <int> dynamicArray1;
    vector <int> dynamicArray2;
    vector <int> mergingTwoDynamicArray;
    cout<<"\n\nEnter First Array Length: ";
    cin>>number1;
    cout<<"\n\nEnter First Array Elements: \n\n";

    for(int i=0; i<number1; i++)
    {
        int number;
        cin>>number;
        dynamicArray1.push_back(number);
        mergingTwoDynamicArray.push_back(number);
    }
    cout<<"\n\nEnter Second Array Length: ";
    cin>>number2;
    cout<<"\n\nEnter Second Array Elements: \n\n";

    for(int i=0; i<number2; i++)
    {
        int number;
        cin>>number;
        dynamicArray2.push_back(number);
        mergingTwoDynamicArray.push_back(number);
    }

    cout<<"\n\nMerging Array Elements are: ";

    for(int num: mergingTwoDynamicArray)
    {
        cout<<"  "<<num;
    }
}*/
