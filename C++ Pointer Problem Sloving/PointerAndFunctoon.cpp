#include<iostream>
using namespace std;

//Array Multiplication
int *ArrMul(int a[], int b[], int size){
  int i,*c = new int[size]; //c[5]
  for(i=0; i<size; i++) c[i] = a[i] * b[i];
  return c;
}
void PrintArr(int *a, int size){
  for(int i=0; i<size; i++) cout<<a[i]<<"\t";
  cout << "\n ";
}
int main(){
  int *z, x[5]={1,2,3,4,5}, y[5]={5,6,7,8,9};
  z = ArrMul(x, y, 5);
  cout <<"First array:\n";
  PrintArr( x, 5 );
  cout <<"second array:\n";
  PrintArr( y, 5 );
  cout <<"result array:\n";
  PrintArr( z, 5 );
  delete [] (z);
  //memory deallocated. If you look carefully, we are deallocating the same memory that we allocated, because that memory was passed to variable z from variable c;
}
