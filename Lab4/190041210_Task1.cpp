#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountName;
    string accountType;
    float currBalance;
    float minBalance;
public:
    BankAccount()
    {

    }
    BankAccount(int n, string name, string type,float b,float minb):accountNumber(n),accountName(name),accountType(type),currBalance(b),minBalance(minb)
    {

    }
    void setDetails(int n, string name, string type,float b,float minb)
    {
        accountNumber=n;
        accountName=name;
        accountType=type;
        currBalance=b;
        minBalance=minb;
    }
    float showBalance()
    {
        return currBalance;
    }
    void deposit(float x)
    {
        currBalance=currBalance+x;
    }
    void withdraw(float y)
    {
        if(currBalance-y<=minBalance)
            cout<<"Can't withdraw"<<endl;
        else
            currBalance=currBalance-y;
    }
    void giveInterest(float interestper=3)
    {
        float interest;

            interest=((interestper/100)*currBalance);
            interest=interest-(0.1*interest);
            currBalance=currBalance+interest;

    }
    void display()
    {
        cout<<accountName<<"'s Bank Account Details\n";
        cout<<"Account Number: "<<accountNumber<<"\n";
        cout<<"Account type: "<<accountType<<"\n";
        cout<<"Current Balance: "<<currBalance<<"\n";
        cout<<"Minimum Balance: "<<minBalance<<"\n";
    }
    ~BankAccount()
    {
        cout<<"Account of Mr."<<accountName<<" with account no "<<accountNumber<<" is destroyed with a balance of BDT "<<currBalance;
    }
};

int main()
{
    BankAccount acc(1024,"Rafi","Savings",500,50);
    acc.display();
    acc.deposit(500);
    cout<<"Balance: "<<acc.showBalance()<<endl;
    acc.withdraw(200);
    cout<<"Balance: "<<acc.showBalance()<<endl;
    acc.giveInterest(5);
    cout<<"Balance: "<<acc.showBalance()<<endl;
    acc.withdraw(5000);

}
