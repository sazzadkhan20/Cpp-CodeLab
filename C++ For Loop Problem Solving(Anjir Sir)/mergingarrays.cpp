#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a integer number ";
    cin>>n;
    cout<<endl;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    int arr4[(3*n)];
    bool flag1 = true;
    bool flag2 = false;
    bool flag3 = false;
    for(int i=0; i<n; i++)
    {
      cin>>arr1[i]>>arr2[i]>>arr3[i];
      cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr1[i]<<endl<<arr2[i]<<endl<<arr3[i]<<endl<<"\n";
    }
     for(int i=0; i<(3*n); i++)
     {
         if(flag1){
         arr4[i]=arr1[i];
          if((i+1)==n)
          {
              flag1 = false;
              flag2 = true;
          }
         }
        else if(flag2)
         {
            arr4[i]=arr2[i-n];
            if((i+1)==(2*n))
          {
              flag2 = false;
              flag3 = true;
          }
         }
       else  if(flag3)
         {
            arr4[i]=arr3[i-(2*n)];
         }
     }
     for(int i=0; i<(3*n); i++)
     {
         cout<<arr4[i]<<" ";

     }

}
