#include <iostream>

using namespace std;

class constExample
{
    private:
        int data1, data2;
    public:
        constExample(int d1, int d2): data1(d1),data2(d2)
        {}
        constExample()
        {}
        int addFunction() const;
};

int constExample::addFunction() const
{
    int sum = 0;
    sum = data1 + data2;
    return sum;
}

int swap(int & data1, int & data2)
{
    int temp = data1;
    data1 = data2;
    data2 = data1;
}

int main()
{
    constExample c1(10,5),c2(6,8),c3;
    int val1 =7, val2 = 9;
    cout << c1.addFunction() << endl;
    cout << c2.addFunction() << endl;
    cout <<"Before Swap" << endl;
    cout << val1 << endl;
    cout << val2 << endl;
    swap(val1,val2);
    cout <<"After Swap" << endl;
    cout << val1 << endl;
    cout << val2 << endl;
    return 0;
}