#include <iostream>
#include <cmath>

using namespace std;

class Coordinate
{
private:
    float x;
    float y;
    float distance;

public:
    Coordinate(float a=0,float o=0):x(a),y(o)
    {

    }
    float getDistance(Coordinate c)
    {
        return sqrt((x-c.x)*(x-c.x)+(y-c.y)*(y - c.y));
    }

    float getDistance()
    {
        return sqrt((x-0)*(x-0)+(y-0)*(y-0));
    }

    void move_x(float val)
    {
        x=x+val;
    }
    void move_y(float val)
    {
        y=y+val;
    }
    void move(float val)
    {
        move_x(val);
        move_y(val);
    }

    bool operator>(Coordinate rightop)
    {
        return (distance>rightop.distance);
    }
    bool operator<(Coordinate rightop)
    {
        return (distance<rightop.distance);
    }
    bool operator>=(Coordinate rightop)
    {
        return (distance>=rightop.distance);
    }
    bool operator<=(Coordinate rightop)
    {
        return (distance<=rightop.distance);
    }
    bool operator==(Coordinate rightop)
    {
        return (distance==rightop.distance);
    }
    bool operator!=(Coordinate rightop)
    {
        return (distance!=rightop.distance);
    }

    Coordinate operator++()
    {
        ++x;
        ++y;
        return Coordinate(x,y);
    }
    Coordinate operator++(int)
    {
        ++x;
        ++y;
        return Coordinate(x,y);
    }
    Coordinate operator--()
    {
        --x;
        --y;
        return Coordinate(x,y);
    }
    Coordinate operator--(int)
    {
        --x;
        --y;
        return Coordinate(x,y);
    }
    ~Coordinate()
    {
    }
};


int main()
{
    Coordinate c1(5,10),c2(4,8),c3;

    cout<<"c1.getdistance() :"<<c1.getDistance()<<endl;
    cout<<"c1.getdistance(c2) :"<<c1.getDistance(c2)<<endl;

    c1.move(5);
    c1.move_x(2);
    c1.move_y(3);

    c1++;

    cout<<"c1.getdistance() :"<<c1.getDistance()<<endl;

}
