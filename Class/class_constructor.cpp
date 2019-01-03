#include <iostream>

using namespace std;

class carrotlabz
{
    private:
        int id;
        char *name;
    public:
        carrotlabz(int eid, char *ename):id(eid),name(ename)
        {}
        
        carrotlabz():id(-1),name("UnKnown")
        {}

        void printdata()
        {
            cout << "ID = " << id << endl
                 << "Name = " << name << endl;
        }
};

int main()
{
    carrotlabz c1(12,"Mohit"), c2;
    c1.printdata();
    c2.printdata();

    return 0;
}