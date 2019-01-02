#include <iostream>
using namespace std;

class testObj
{
    private:
        int pdata;
    public:
        void setdata(int value)
        {
            pdata = value;
        }
        void printdata()
        {
            cout << "Data = " << pdata << endl;
        }
};


int main()
{
    testObj t1, t2;
    t1.setdata(500);
    t2.setdata(200);

    t1.printdata();
    t2.printdata();
    return 0;
}