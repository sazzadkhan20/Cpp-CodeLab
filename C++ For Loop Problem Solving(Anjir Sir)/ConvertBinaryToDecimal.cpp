/*#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int bin_num,dec_num=0,a=0;
    cout<<"Input a binary number: ";
    cin>>bin_num;
    string s=to_string(bin_num);
    for(int i=s.length()-1; i>=0; i--)
    {
        int r=static_cast<int>(s[i])-48;
        dec_num=dec_num+(r*pow(2,a));
        a++;
    }
    cout<<"\n\nThe decimal number: "<<dec_num;
}*/
#include <iostream>
using namespace std;

int main()
{
  long binaryNumber, decimalNumber = 0, j = 1, remainder;
	cout << "\n\n Convert a  binary number to decimal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber != 0)
  {
   remainder = binaryNumber % 10;
   decimalNumber = decimalNumber + remainder * j;
   j = j * 2;
   binaryNumber = binaryNumber / 10;
  }
  cout<<" The decimal number: " << decimalNumber<<"\n";
}
