#include<iostream>
#include<cmath>
using namespace std;

class FLOAT
{
private:
    float data;
public:
    FLOAT():data(0)
    {

    }
    FLOAT(float d):data(d)
    {

    }
    FLOAT operator+(FLOAT f)
    {
        return FLOAT(data+f.data);
    }
    FLOAT operator-(FLOAT f)
    {
        return FLOAT(data-f.data);
    }
    FLOAT operator*(FLOAT f)
    {
        return FLOAT(data*f.data);
    }
    FLOAT operator/(FLOAT f)
    {
        if(f.data==0)
        {
            cout<<"Undefined";
            exit(1);
        }
        else
            return FLOAT(data/f.data);
    }
    float getdata()
    {
        return data;
    }
};

int main()
{
    FLOAT f1(2.5),f2(3.1);
    FLOAT f3=f1+f2;
    cout<<"f1+f2: "<<f3.getdata()<<endl;
    FLOAT f4=f1-f2;
    cout<<"f1-f2: "<<f4.getdata()<<endl;
    FLOAT f5=f1*f2;
    cout<<"f1*f2: "<<f5.getdata()<<endl;
    FLOAT f6=f1/f2;
    cout<<"f1/f2: "<<f6.getdata()<<endl;
}
