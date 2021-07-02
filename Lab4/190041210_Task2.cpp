#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;
public:
    Rectangle():length(1),breadth(1)
    {

    }
    Rectangle(float x, float y):length(x), breadth(y)
    {

    }
    Rectangle(float x):length(x)
    {

    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
    float diagonal()
    {
        return sqrt((length*length)+(breadth*breadth));
    }
    float diagonalAngle()
    {
        return atan(breadth/length);
    }
    void setVal(float x, float y)
    {
        if(x>=1  && x<20)
            length=x;
        if(y>=1 && y<20)
            breadth=y;
    }
    void Display()
    {
        cout<<"Area: "<<area()<<"\n"<<"Perimeter: "<<perimeter();
    }
};

int main()
{
    Rectangle rec(9,4);
    cout<<"Area: "<<rec.area()<<endl;
    cout<<"Perimeter: "<<rec.perimeter()<<endl;
    cout<<"Diagonal: "<<rec.diagonal()<<endl;
    cout<<"Angle between diagonal and length: "<<rec.diagonalAngle()<<"rad"<<endl;


}
