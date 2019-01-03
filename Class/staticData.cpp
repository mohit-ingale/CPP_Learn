#include <iostream>

using namespace std;


class switchCounter
{
    private:
        static int count;
    public:
        switchCounter()
        {
            count++;
        }
        void printCounter()
        {
            cout << "Counter  = " << count << endl;
        }
};

int main()
{
    switchCounter s1, s2, s3;
    s1.printCounter();
    s2.printCounter();
    s3.printCounter();
}