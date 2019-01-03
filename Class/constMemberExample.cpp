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

int main()
{
    constExample c1(10,5),c2(6,8);
    cout << c1.addFunction() << endl;
    cout << c2.addFunction() << endl;
    return 0;
}