#include<iostream>

using namespace std;

class Furniture
{
private:
    string name;
public:
    Furniture(string f="") : name(f) ///empty string
    {

    }


};

class Bed : public Furniture
{
private:
    string bedSize;
public:
    Bed(string b="") : bedSize(b)
    {

    }
    void setBed()
    {
        cout<<"Enter bed size: ";
        cin>>bedSize;
    }
    void getBed()
    {
        cout<<"Bed size: "<<bedSize<<endl;
    }
};

class Sofa : public Furniture
{
private:
    string seat_no;
public:
    Sofa(string s="") : seat_no(s)
    {

    }
    void setSofa()
    {
        cout<<"Seat Number: ";
        cin>>seat_no;
    }
    void getSofa()
    {
        cout<<"Seat no: "<<seat_no<<endl;
    }
};

class DiningTable : public Furniture
{
private:
    string chairCount;
public:
    DiningTable(string d=""):chairCount(d)
    {

    }
    void setDiningTable()
    {
        cout<<"Chair Count: ";
        cin>>chairCount;
    }
    void getDiningTable()
    {
        cout<<"Chair Count: "<<chairCount<<endl;
    }
};

int main()
{
    Bed bed;
    bed.setBed();
    bed.getBed();

    Sofa s;
    s.setSofa();
    s.getSofa();

    DiningTable d;
    d.setDiningTable();
    d.getDiningTable();
}
