#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int numberof_arrays,merging_array_length;
    cout<<"Please Enter The number of Arrays do you want to Merge it in One Array: ";
    cin>>numberof_arrays;
    int temp_length=0;
    int arr_i_length;
    int arr_i[arr_i_length];

    for(int i=1; i<=numberof_arrays; i++)
    {
        cout<<"\n\nEnter the "<<i<<" number of Array Length: ";
        cin>>arr_i_length;
        merging_array_length+=arr_i_length;

    }
    int merging_arr[merging_array_length];

    for(int i=1; i<=numberof_arrays; i++){
        cout<<"\n\nEnter The Elements of "<<i<<" number of Array: \n\n";

        for(int j=0; j<arr_i_length; j++)
        {
            cin>>arr_i[j];
            merging_arr[temp_length]=arr_i[j];
            temp_length+=1;
        }
    }
    cout<<"\n\nThe Merging of "<<numberof_arrays<<" Array Elements are: ";

        for(int i=0; i<merging_array_length; i++)
        {
            cout<<setw(5)<<merging_arr[i];
        }

}

/*#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        int arr_i_length;
        std::cout << "\nEnter the length of Array " << i << ": ";
        std::cin >> arr_i_length;

        // Now, let's declare an array of size arr_i_length and take input for its elements
        int arr[arr_i_length];
        for (int j = 0; j < arr_i_length; j++) {
            std::cout << "Enter element " << j + 1 << ": ";
            std::cin >> arr[j];
        }

        // Perform operations on the 'arr' array if needed
        // ...
    }

    return 0;
}*/

