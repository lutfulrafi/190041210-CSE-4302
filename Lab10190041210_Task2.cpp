#include<iostream>
using namespace std;

class Pet
{
private:
    string animal;
    string name;
    int *age;  ///pointer used which means we can't use our default copy ctor and assignment op

    ///In order to restrict a class from copying one object to another, we can keep the overloaded ctor and assignment op in private
    ///   Pet operator=(Pet &a) {};
    ///   Pet(Pet&b) {}

public:
    Pet():animal(""),name("")
    {
        age=new int;         //dynamically allocate memory for age
    }
    void setData()
    {   cout<<"Animal: "; cin>>animal;
        cout<<"Name :";   cin>>name;
        int AGE;
        cout<<"Age: ";   cin>>AGE;
        *age=AGE;
    }

    Pet(Pet b)                       /// overloaded copy constructor - assigns value at declaration
    {
       // cout<<"Overloaded copy constructor"<<endl;
        animal=b.animal;
        name=b.name;
        age= new int;
        *age=*(b.age);
    }

    Pet operator=(Pet &a)           ///overloaded assignment operator  - assigns new value to object from another object which was previously initialized
    {
       // cout<<"Overloaded assignment operator"<<endl;
        animal=a.animal;
        name=a.name;
        age= new int;
        *age=*(a.age);
        return *this;
    }

   /* void setName(Pet x)
    {
        cout<<"Function to set Pet's name only"<<endl;
        name=x.name;
    }*/

    void getData()
    {
        cout<<"Showing Animal Info: "<<endl;
        cout<<"Animal: ";
        cout<<animal<<endl;
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age:";
        cout<<*age<<endl<<endl;
    }
    ~Pet()
    {
        delete age;
    }




};


int main()

{
   Pet cat;
   cat.setData();
   cat.getData();

   Pet dog=cat;      ///copy constructor called operator called
   dog.getData();

   Pet fish;
   fish=cat;        ///assignment operator called
   fish.getData();

}
