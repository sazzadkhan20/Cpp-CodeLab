#include<iostream>

using namespace std;

int main()
{
    char arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    int countArr[26] = {0};
    for(int i=0; i<10; i++)
    {
        int val = arr[i] - 'a';
        countArr[val]++;
    }
    for(int i=0; i<10; i++)
    {
        if(countArr[arr[i]-'a']!=0)
        {
            cout<<arr[i]<<" = "<<countArr[arr[i]-'a']<<"\n";
        }
        countArr[arr[i]-'a'] = 0;
    }
}


/*#include<iostream>

using namespace std;

int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    int highestElement = arr[0];

    for(int i=0; i<10; i++)
    {
        if(highestElement<arr[i])
        {
            highestElement = arr[i];
        }
    }
    highestElement++;
    int countArr[highestElement] = {0};
    for(int i=0; i<10; i++)
    {
        int val = arr[i];
        countArr[val]++;
    }
    for(int i=0; i<10; i++)
    {
        if(countArr[arr[i]]!=0)
        {
            cout<<arr[i]<<" = "<<countArr[arr[i]]<<"\n";
        }
        countArr[arr[i]] = 0;
    }
}
*/
