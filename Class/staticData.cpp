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
        /*
            # Functions are static and only one instance is created for multiple objects
            # Needs to be taken care in case of multithreading
        */
        void printCounter() 
        {
            int data;
            data += 5;
            cout << "Counter  = " << count << endl;
            cout << "Data  = " << data << endl;
        }
};

int switchCounter::count = 0;

int main()
{
    switchCounter s1, s2, s3;
    s1.printCounter();
    s2.printCounter();
    s3.printCounter();
}