#include <iostream>

using namespace std;
class User
{
private:
    string name;
    int accountNo;
    double balance;
public:
    void set_name(string name)
    {
        this->name=name;
    }
    void set_accountNo(int accountNo)
    {
        this->accountNo=accountNo;
    }
    void set_balance(double balance)
    {
        this->balance=balance;
    }
    string get_name()
    {
        return name;
    }
    int get_accountNo()
    {
        return accountNo;
    }
    double get_balance()
    {
        return balance;
    }
};

class Customer: public User
{
public:
    Customer(string name,int accountNo,double balance)
    {
        set_name(name);
        set_accountNo(accountNo);
        set_balance(balance);
    }

    void accountInfo()
    {
        cout<<"Name: "<<get_name()<<endl;
        cout<<"Account No.: "<<get_accountNo()<<endl;
        cout<<"Current Balance: "<<get_balance()<<endl;
    }

    void cash_In(int amount)
    {
        set_balance(get_balance()+amount);

        cout<<endl<<"Your "<<amount<<" taka is successfully added"<<endl;
        cout<<"Now your current balance is: "<<get_balance()<<endl;
    }
    void cash_Out(int amount)
    {
        set_balance(get_balance()-amount);
        cout<<endl<<"Your "<<amount<<" taka is successfully deduct"<<endl;
        cout<<"Now your current balance is: "<<get_balance()<<endl;
    }

    Customer send_money(Customer obj,int amount)
    {
        set_balance(get_balance()-amount);
        cout<<"Your "<<amount<<" taka is successfully transferred to "<<obj.get_accountNo()<<endl;
        obj.set_balance(obj.get_balance()+amount);
        return obj;
    }
};

int main()
{   cout<<"Welcome to Bkash"<<endl;
    Customer Raju("Raju",12421,3000);
    Raju.accountInfo();
    cout<<endl;
    Customer Saju("Saju",12342,2500);
    Saju.accountInfo();
    Raju.cash_In(200);
    cout<<endl;
    Raju.accountInfo();
    Saju.cash_Out(500);
    cout<<endl;
    Saju.accountInfo();
    cout<<endl;
    Saju=Raju.send_money(Saju,500);
    cout<<endl;
    Raju.accountInfo();
    cout<<endl;
    Saju.accountInfo();

}
