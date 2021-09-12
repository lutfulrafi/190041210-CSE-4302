#include<iostream>

using namespace std;

class OlympicAthlete
{
protected:
    string name;
    int age;
public:
    OlympicAthlete()
    {

    }
    OlympicAthlete(string n,int a): name(n), age(a)
    {

    }
    virtual void setData()
    {
        cout<<"Name: "; cin>>name;
        cout<<"Age: "; cin>>age;
    }
    virtual void perform()=0;
    virtual void result()=0;
};

class Sprinter: public OlympicAthlete
{
protected:
    double time;
public:
    void setData()
    {
        cout<<"Sprinter Information:"<<endl;
        OlympicAthlete::setData();
        cout<<"Time: ";  cin>>time;
    }
    void perform()
    {
        cout<<"Starts Running"<<endl;
    }
    void result()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Position: 1st\n";
        cout<<"Time: "<<time<<" seconds"<<endl<<endl;
    }
};

class Swimmer: public OlympicAthlete
{
protected:
    double time;
public:
    void setData()
    {
        cout<<"Swimmer Information:"<<endl;
        OlympicAthlete::setData();
        cout<<"Time: ";  cin>>time;
    }
    void perform()
    {
        cout<<"Starts swimming"<<endl;
    }
    void result()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Position: 1st\n";
        cout<<"Time: "<<time<<" seconds"<<endl<<endl;
    }
};

class Javelineer: public OlympicAthlete
{
protected:
    double distance;
public:
     void setData()
    {
        cout<<"Javelineer Information:"<<endl;
        OlympicAthlete::setData();
        cout<<"Distance: ";  cin>>distance;
    }
    void perform()
    {
        cout<<"Throws Javelin"<<endl;
    }
    void result()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Position: 1st\n";
        cout<<"Distance: "<<distance<<"m"<<endl<<endl;
    }
};

int main()
{
    OlympicAthlete *ptr;

    Sprinter bolt;
    ptr=&bolt;
    ptr->setData();
    ptr->perform();
    ptr->result();

    Swimmer phelps;
    ptr=&phelps;
    ptr->setData();
    ptr->perform();
    ptr->result();

    Javelineer jav;
    ptr=&jav;
    ptr->setData();
    ptr->perform();
    ptr->result();
}
