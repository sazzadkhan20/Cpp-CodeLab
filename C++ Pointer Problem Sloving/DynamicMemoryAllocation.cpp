#include<iostream>
using namespace std;

// new, delete
int main(){
    int n, i,*ptr, sum=0;
    cout << "# of elements: ";
    cin >> n;        //input 5
    ptr = new (nothrow) int[n];
    if(ptr==NULL){  //ptr==0
	cout << "Error! not allocated.";
	return 1;
    }
    cout << "Enter elements:\n";
    for(i=0;i<n;++i)
    {   //input 2 6 7 4 3
        cin >> *(ptr+i);  //ptr[i]
        sum += *(ptr+i);
    }
    cout << "Sum = " << sum;
    delete [] (ptr);
    //memory de-allocated
}

