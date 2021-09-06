#include<iostream>

using namespace std;

class Counter
{
private:
    int count;
    int step;
public:
    Counter():count(0),step(1)
    {

    }
    Counter(int c):count(c),step(1)
    {

    }
    void setIncrementStep(int step_val)
    {
        if(step_val<0)
        {
            cout<<"Can't assign negative value";
            exit(1);
        }
        else
            step=step_val;
    }
    int getCount()
    {
        return count;
    }
    int getStep()
    {
        return step;
    }
    void resetCount()
    {
        count=0;
    }
    void increment()
    {
        count=count+step;
    }
    Counter operator+(Counter cnt) //c1+c2
    {
       int s=min(step,cnt.step);
       return Counter(count+cnt.count);
    }
    Counter operator+(int var)     //c1+5
    {
        return Counter(count+var);
    }
    Counter operator++()            //c1++
    {
        return Counter(++count);
    }
    Counter operator++(int)         //c1--
    {
        return Counter(count++);
    }
    Counter operator +=(Counter cnt)      //c1+=c2
    {
        return Counter(count+cnt.count);
    }
    friend Counter operator+(int var, Counter cnt);
};

Counter operator+(int var,Counter cnt)        //5+c1
{
    return Counter(var+cnt.count);
}

int main()
{
    Counter c1;
    cout<<"c1: "<<c1.getCount()<<endl;
    c1.setIncrementStep(5);
    c1.increment();
    cout<<"c1: "<<c1.getCount()<<endl;
    Counter c2(10);
    cout<<"c2: "<<c2.getCount()<<endl;
    Counter c3=c1+c2;
    cout<<"Step: "<<c3.getStep()<<endl;
    cout<<"c3: "<<c3.getCount()<<endl;
    Counter c4=c1+20;
    cout<<"c4: "<<c4.getCount()<<endl;
    Counter c5=20+c2;
    cout<<"c5: "<<c5.getCount()<<endl;
    cout<<"c5 Postfix: "<<(c5++).getCount()<<endl;
    cout<<"c5 Prefix: "<<(++c5).getCount()<<endl;
    //Counter c6=c1+=c2;
    cout<<"c1+c2: "<<(c1+=c2).getCount()<<endl;
    return 0;
}
