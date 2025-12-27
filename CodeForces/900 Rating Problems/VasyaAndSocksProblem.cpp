#include<iostream>

using namespace std;

int main()
{
    int days,scoksNum,daysCountWithScoks = 0;
    cin>>scoksNum>>days;

    int i=1;
    while(scoksNum!=0)
    {
        if(i%days==0)
        {
           scoksNum=scoksNum;
        }
            else
            {
                scoksNum--;
            }
            i++;
            daysCountWithScoks++;

    }
    cout<<daysCountWithScoks<<endl;

}
