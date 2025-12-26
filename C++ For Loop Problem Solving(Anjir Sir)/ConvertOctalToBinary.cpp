/*#include<iostream>

using namespace std;

int main()
{
    long oct_num;
    int rem1,rem2;
    string bin_num="";
    cout<<"Input a Octal Number: ";
    cin>>oct_num;
    while(oct_num!=0)
    {
      rem1=oct_num%10;
      oct_num/=10;
      if(rem1==0)
      {
          bin_num="000"+bin_num;
      }
      else if(rem1==1)
      {
           bin_num="001"+bin_num;
      }
      else if(rem1==2)
      {
           bin_num="010"+bin_num;
      }
      else if(rem1==3)
      {
           bin_num="011"+bin_num;
      }
      else
      {
      while(rem1!=0)
      {
          rem2=rem1%2;
          rem1/=2;
          bin_num=to_string(rem2)+bin_num;
      }
      }
    }
    cout<<"\n\nThe Binary Number: "<<bin_num;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;

    int binaryNumber = 0;
    int base = 1;

    while (octalNumber > 0) {
        int rem = octalNumber % 10;

        // Convert each octal digit to a 3-bit binary representation
        int binaryDigit = 0;
        int tempBase = 1;
        while (rem > 0) {
            int binaryRem = rem % 2;
            binaryDigit += binaryRem * tempBase;
            rem /= 2;
            tempBase *= 10;
        }

        binaryNumber += binaryDigit * base;
        octalNumber /= 10;
        base *= 1000; // Each octal digit is replaced by a 3-digit binary representation
    }

    cout << "Binary equivalent: " << binaryNumber << endl;

    return 0;
}*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int octal_numvalues[] = {0, 1, 10, 11, 100, 101, 110, 111};
  long octal_num, tempoctal_num, binary_num, place;
  int rem;
	cout << "\n\n Convert any octal number to binary number:\n";
	cout << "------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
	tempoctal_num = octal_num;
	binary_num = 0;
	place = 1;
	while (tempoctal_num != 0)
	{
	rem = (int)(tempoctal_num % 10);
	binary_num = octal_numvalues[rem] * place + binary_num;
	tempoctal_num /= 10;
	place *= 1000;
	}
  cout<<" The equivalent binary number: " << binary_num <<"\n";
}


