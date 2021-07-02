#include<iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator,denominator;
public:
    void assign(int n,int d)
    {
        numerator=n;
        if(d==0)
        {
            cout<<"Error. Can't assign 0 to denominator.\n";
            exit(1);
        }
        else
            denominator=d;
    }
    double convert()
    {
        return (double)numerator/denominator;
    }
    void invert()
    {
        if(numerator==0)
            cout<<"Error. Can't invert.\n";
        else
            swap(numerator,denominator);
    }
    void print()
    {
            cout<<"The number is "<<numerator<<"/"<<denominator<<endl;
    }
};


int main()
{
    RationalNumber number;
    int n,d;
    cout<<"Enter numerator: ";
    cin>>n;
    cout<<"Enter denominator: ";
    cin>>d;
    number.assign(n,d);
    number.print();
    number.convert();
    cout<<"Decimal number: "<<number.convert()<<"\n";
    number.invert();
    cout<<"After the invert member function has been called, "; number.print(); cout<<"\n";
    return 0;

}

