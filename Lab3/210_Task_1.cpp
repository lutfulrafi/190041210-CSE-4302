#include<iostream>

using namespace std;

class Counter
{
private:
    int c;
    int val;
public:
    void setIncrementStep(int step_val)
    {
        val=step_val;
    }
    int getCount()
    {
        return c;
    }
    void resetCount()
    {
        c=0;
    }
    void increment()
    {
        c=c+val;
    }
};

int main()
{
    int step_val;
    cin>>step_val;
    Counter cnt;
    cnt.setIncrementStep(step_val);
    //cnt.resetCount();
    cout<<"Count Value: "<<cnt.getCount()<<"\n";
    cnt.increment();
    cout<<"Count after incrementing once: "<<cnt.getCount()<<endl;
    cnt.increment();
    cout<<"Count after incrementing twice: "<<cnt.getCount()<<endl;
    cnt.resetCount();
    cout<<"Count after resetting: "<<cnt.getCount()<<endl;
    return 0;
}
