#include <iostream>

using namespace std;

int main() {
    int numberofRows;
    cout << "\n\nEnter Number of Rows: ";
    cin >> numberofRows;

    int arr[numberofRows];

    for (int i = 0; i < numberofRows; i++) {
        int prev = 1; // Initialize the previous value to 1
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[j] = 1;
            } else {
                int temp = arr[j]; // Store the current value in a temporary variable
                //cout<<arr_i[j]<<endl;
                arr[j] = prev + arr[j]; // Update the current value
                prev = temp; // Update the previous value for the next iteration
            }
        }
        // Print spaces for formatting
        for (int k = 0; k < numberofRows - i; k++) {
            cout << " ";
        }
        // Print the current row
        for (int j = 0; j <= i; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}


/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int numberofRows;
    cout<<"\n\nEnter Number of Rows: ";
    cin>>numberofRows;
    vector <int> arr_prev;
    for(int i=0; i<numberofRows; i++)
    {
        int lengthofArray_i;
        lengthofArray_i = i+1;
        int arr_i[lengthofArray_i];
        int j=0;
         while(j<=i)
         {
             if(j==0 || j==i)
             {
                 arr_i[j] = 1;
                 j++;
             }
             else
             {

                 for(int p=0; p<i; p++)
                 {
                     if(p!=i-1)
                     {
                         //cout<<" "<<arr_prev[p]<<" "<<arr_prev[p+1];
                         //cout<<" "<<arr_prev[p];
                        arr_i[j] = arr_prev[p]+arr_prev[p+1];
                        j++;
                     }
                     else
                     {
                        break;
                     }
                 }
             }
         }
         arr_prev.clear();
         for(int w=0; w<lengthofArray_i; w++)
         {
             cout<<" "<<arr_i[w]<<" ";
             arr_prev.push_back(arr_i[w]);
             //cout<<" "<<arr_prev[w]<<" ";
         }
         cout<<endl<<endl;
    }

}*/
