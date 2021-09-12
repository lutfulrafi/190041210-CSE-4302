#include<iostream>
using namespace std;


class Staff
{
private:
    int z;     ///dummy data member
protected:
    int y;     ///dummy data member
    int code;
    string name;
    string staff="Staff";
public:
    int x;     ///dummy data member
    void setData()
    {
        cout<<"\nSet data: \n";
        cout<<"code: ";
        cin>>code;
        cout<<"name: ";
        cin>>name;
    }
    void display()
    {
        cout<<"\nAbout Staff: "<<"\nCode: "<<code<<"\nName: "<<name<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<endl;
    }
};

class Teacher : protected Staff  ///protected mode used - both public & protected members have become protected in this class
{
protected:
    string subject;
    string publication;
    string teacher="Teacher";
public:
    void setData()
    {
        cout<<"\nSet Teacher data: \n";
        Staff::setData();
        cout<<"subject: ";
        cin>>subject;
        cout<<"publication: ";
        cin>>publication;
    }
    void display()
    {
        cout<<"\nAbout Teacher: \n";
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nSubject: "<<subject<<"\nPublication: "<<publication<<endl<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<" - "<<teacher<<endl;
    }

   /** void accessZ()       Can't access z in derived class as it is private
    {
        z=z*5;
    }*/

};

class Officer : private Staff    ///private mode used- protected & public members of Base class have become private. Can't access these members outside the class
{
   /**
        data members code, name can't be accessed outside of this class, not even in a class which inherits officer class
    */
protected:
    string category;
    string officer="Officer";
public:
    void setData()
    {
        cout<<"\nSet officer data: \n";
        Staff::setData();
        cout<<"category: ";
        cin>>category;
    }
    void display()
    {
        cout<<"\nAbout Officer: \n";
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nCategory: "<<category<<endl<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<" - "<<officer<<endl;
    }
};

class Typist : public Staff     ///mode - public, access specifiers of members of base class stays the same in derived class
{
protected:
    float speed;
    string typist="Typist";
public:
    void setData()
    {
        cout<<"\nSet typist data: \n";
        Staff::setData();
        cout<<"speed: ";
        cin>>speed;
    }
    void display()
    {
        cout<<"\nAbout Typist: \n";
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nSpeed: "<<speed<<endl<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<" - "<<typist<<endl;
    }
};

class Regular : public Typist
{
protected:
    int wage;
    string regular="Regular";
public:
    void setData()
    {
        cout<<"\nSet Regular typist data: \n";
        Typist::setData();
        cout<<"wage: ";
        cin>>wage;
    }
    void display()
    {
        cout<<"\nAbout Regular Typist: \n";
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nSpeed: "<<speed<<"\nWage: "<<wage<<endl<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<" - "<<typist<<" - "<<regular<<endl;
    }
};

class Casual : public Typist   ///can't use protected here
{
protected:
    int wage;
    string casual="Casual";
public:
    void setData()
    {
        cout<<"\nSet Casual typist data: \n";
        Typist::setData();
        cout<<"wage: ";
        cin>>wage;
    }
    void display()
    {
        cout<<"\nAbout Casual Typist: \n";
        cout<<"Name: "<<name<<"\nCode: "<<code<<"\nSpeed: "<<speed<<"\nWage: "<<wage<<endl<<endl;
    }
    void whoAmI()
    {
        cout<<"I am "<<staff<<" - "<<typist<<" - "<<casual<<endl;
    }

};


int main()
{
    Staff staff;
    staff.setData();
    staff.display();
    staff.whoAmI();

    Teacher teacher;
    teacher.setData();
    teacher.display();
    teacher.whoAmI();

    Officer officer;
    officer.setData();
    officer.display();
    officer.whoAmI();

    Typist typist;
    typist.setData();
    typist.display();
    typist.whoAmI();

    Regular Rtypist;
    Rtypist.setData();
    Rtypist.display();
    Rtypist.whoAmI();

    Casual Ctypist;
    Ctypist.setData();
    Ctypist.display();
    Ctypist.whoAmI();

}
