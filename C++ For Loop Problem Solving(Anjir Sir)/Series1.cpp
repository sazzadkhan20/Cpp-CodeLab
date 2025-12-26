/*#include<iostream>

using namespace std;

int main()
{
   float a=1.2,sum=0.0;
   int n;
   cout<<"input number of terms: ";
   cin>>n;
   cout<<endl<<endl<<"Series is: ";
   for(int i=0; i<n; i++)
   {
       cout<<a<<" + ";
       sum=sum+a;
       a=a+1.1;
   }
   cout<<endl<<endl<<"Sum of the above Series is: "<<sum<<endl<<endl;
}*/

/*#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"input number of terms: ";
   cin>>n;
   cout<<endl<<endl<<"Series is: ";
   float value = 1.2;
   float increment =1.1;
   float sum = 0.0;
   for(int i=0; i<n; i++)
   {
       cout<<value<<" + ";
       sum=sum+value;
       value=value+increment;
       increment=increment+0.1;
   }
   cout<<endl<<endl<<"Sum of the above Series is: "<<sum<<endl<<endl;
}*/

#include <iostream>
using namespace std;
int main()
{
    int trm;
    double num, sum, i, m;
    cout << "\n\n calculate the sum of the series 1.2+2.3+3.4+4.5+5.6+......:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> trm;
    for (i = 1; i <= trm; i++)
    {
        if (i < 9)
        {
            m = .1;
        }
        else
        {
            m = .01;
        }
        num = i + ((i + 1) * (m));
        sum = sum + num;
        cout << num;
        if (i < trm)
        {
            cout << " + ";
        }
    }
    cout << "\n The sum of the series =" << sum << endl;
}

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n\nCalculate the sum of the series 1.2+2.3+3.4+4.5+5.6+.......";
    cout<<"\n\nInput the last integer between 1 to 98 without fraction you want to add: ";
    cin>>n;
    cout<<"\n\n";
    double sum=0.0,increment=1.1,value=1.2;
    for(int i=1; i<=n; i++)
    {
        cout<<value<<" + ";
        if(i==8)
        {
           increment=0.2;
        }
        if(i>8)
        {
           increment=1.01;
        }
        sum=sum+value;
        value=value+increment;
    }
    cout<<"\n\nSum of the series is: "<<sum<<"\n\n";
}*/

