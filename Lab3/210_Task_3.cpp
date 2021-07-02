#include<iostream>

using namespace std;

class Medicine
{
private:
    char* name; char* genericName;
    double discountPercent,unitPrice;
public:
    void assignName(char* n, char* gn)
    {
        name=n;
        genericName=gn;
    }
    void assignPrice(double price)
    {
        if(price<0)
            price=0;
        else
            unitPrice=price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>=0 &&percent<=45)
            discountPercent=percent;
        else
            discountPercent=5;
    }
    double getSellingPrice()
    {
       // unitPrice=nos;
        double discount=(discountPercent/100)*unitPrice;
        return unitPrice-discount;
    }
    void display()
    {
        cout<<name<<"("<<genericName<<")"<<"has a unit price BDT "<<unitPrice<<". Current discount is "<<discountPercent<<"%."<<endl;
    }
};

int main()
{
    Medicine med;
    char name[20],genericName[20];
    double price,percent,unitPrice;
    cout<<"Enter name: "; cin>>name;
    cout<<"Enter generic name: ";  cin>>genericName;

    med.assignName(name,genericName);
    cout<<"Price: ";  cin>>price;
    med.assignPrice(price);
    cout<<"Discount Percentage: "; cin>>percent;
    med.setDiscountPercent(percent);
    med.display();

    cout<<"Selling price is "<<med.getSellingPrice()<<endl;

}
