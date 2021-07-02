#include<iostream>
#include<cmath>
using namespace std;

class Employee
{
private:
    string EmpName;
    int ID;
    int age;
    float salary;
public:
    void FeedInfo(string name,int i,int a,float sal)
    {
        EmpName=name;
        ID=i;
        age=a;
        salary=sal;
    }
    string getStatus()
    {
        string status;
        if(age<=25 && salary<=20000)
            status="Low";

        if(age<=25 && salary>20000)
            status="Moderate";

        if(age>25 && salary<=21000)
            status="Low";

        if(age>25 && (salary>21000 && salary<=60000))
            status="Moderate";

        if(age>25 && salary>60000)
            status="High";

        return status;

    }
    void ShowInfo()
    {
        cout<<"Employee Name: "<<EmpName<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Status: "<<getStatus()<<endl;
    }
};

int main()
{
    Employee e;
    e.FeedInfo("Rafi",10,21,21000);
    e.ShowInfo();
}
