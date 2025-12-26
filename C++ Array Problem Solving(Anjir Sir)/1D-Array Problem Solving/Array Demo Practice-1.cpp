/*#include<iostream>

using namespace std;

int main()
{
  int arr[]={1,5,69,45,5};
  int length=sizeof(arr)/sizeof(arr[0]);
  //cout<<sizeof(arr)<<endl;
  //cout<<sizeof arr[0]<<endl;
   for(int i=0; i<length; i++)
   {
      cout<<arr[i]<<"\t";
   }

}
*/

#include<iostream>

using namespace std;

int main()
{
    int length;
    cout<<"Enter Length of a Array: ";
    cin>>length;
    int arr[length];

   for(int i=0; i<length; i++)
   {
      cin>>arr[i];
      if(i==length-1)
      {
          cout<<endl<<endl;
          for(int j=0; j<length; j++)
          {
              cout<<arr[j]<<"\t";
          }
      }
   }
}

