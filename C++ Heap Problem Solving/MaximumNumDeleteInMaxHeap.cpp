#include<iostream>

using namespace std;

int main() {
    int n = 9;
    int A[] = {80, 65, 90, 50, 25, 30, 45, 55, 40};
    int temp,k;
    for (int i = 1; i<n; i++)
     {
         temp=A[i];
          k = i;
          while (k > 0 && A[k/2] < temp)
         {
             //cout<<A[k/2]<<endl;
              A[k] = A[k/2]; //copy parent’s value to child’s position
              k = k/2;         //consider data of upper/parent’s position
         }
          A[k] = temp;
      }

    cout << "Max Heap: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl << endl;

    temp = A[n - 1];
    A[n - 1] = A[0];
    A[0] = temp;
    n--;
    int i = 0;
    while (2 * i + 1 < n) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < n && A[left] > A[largest])
            largest = left;

        if (right < n && A[right] > A[largest])
            largest = right;

        if (largest != i) {
            swap(A[i], A[largest]);
            i = largest;
        } else {
            break;
        }
    }
    cout << "Heap after deletion of max element: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
