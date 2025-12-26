#include<iostream>

using namespace std;

// Function to heapify a subtree rooted with node i
// which is an index in the array.
void maxHeapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        maxHeapify(a, n, largest);
    }
}

// Function to build a max heap
void buildMaxHeap(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; --i) {
        maxHeapify(a, n, i);
    }
}

// Function to perform heap sort
void heapSort(int a[], int n) {
    //buildMaxHeap(a, n);

    for (int i = n - 1; i > 0; --i) {
        swap(a[0], a[i]);
        maxHeapify(a, i, 0);
    }
}

int main() {
    int n, temp, k;
    //cin >> n;
    n = 9;
    int A[] = {80, 65, 90, 50, 25, 30, 45, 55, 40};

    buildMaxHeap(A, n);

    cout << "Max Heap: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl << endl;

    //heapSort(A, n);
     for (int i = n - 1; i > 0; --i) {
        swap(A[0], A[i]);
        maxHeapify(A, i, 0);
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
