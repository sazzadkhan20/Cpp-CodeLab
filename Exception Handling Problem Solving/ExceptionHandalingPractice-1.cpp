#include<iostream>
#include<conio.h>

using namespace std;

class DividedByNegativeException : public exception
{
    private:

        const char* message_;

   public :

    DividedByNegativeException(const char* message) : message_(message)
    {
       //this->message_ = message_;
    }
    const char* what() const noexcept override
    {
        return message_;
    }

};


int main()
{
    int num1,num2;
    try
    {
        cout<<"\n\nEnter Num-1: ";
        cin>>num1;
        cout<<"\n\nEnter Num-2: ";
        cin>>num2;
        if(num2==0)
        {
            throw 0;
        }
        else if(num2<0)
        {
            throw  DividedByNegativeException("Divided By Negative Not Acceptabel");
        }
        /*else
        {
            //throw exception("this is not possible");
            //throw new exception();
        }*/
        double result = (double)num1/num2;

        cout<<"\n\nResult is: "<<result;
    }
    catch(const DividedByNegativeException & obj)
    {
        cout<<obj.what();
        cout<<"\n\nProgram Ended"<<endl;
    }
    catch(const int &a)
    {
        cout<<"\n\nDivided By Zero Not Applicable";
    }
    catch(const exception & obj)
    {
        cout<<obj.what();
        //cout<<"\n\nProgram Ended"<<endl;
    }
    /*catch(...)
    {
        cout<<"\n\nUnKnown Exception\n\n";
    }*/
    getch();
}
