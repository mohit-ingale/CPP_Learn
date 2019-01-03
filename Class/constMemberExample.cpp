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
        int swap(int & dat1, int & dat2) const;
};

int constExample::addFunction() const
{
    int sum = 0;
    sum = data1 + data2;
    return sum;
}

int constExample::swap(int & dat1, int & dat2) const
{
    int temp = dat1;
    dat1 = dat2;
    dat2 = temp;
}

int main()
{
    const constExample c1(10,5),c2(6,8),c3;
    int val1 =7, val2 = 9;
    //const int val1 =7, val2 = 9;      
    /*This we have to do if we are passing by reference explicitly make variable constant*/
    cout << c1.addFunction() << endl;
    cout << c2.addFunction() << endl;
    cout <<"Before Swap" << endl;
    cout << val1 << endl;
    cout << val2 << endl;
    c2.swap(val1,val2);
    cout <<"After Swap" << endl;
    cout << val1 << endl;
    cout << val2 << endl;
    return 0;
}