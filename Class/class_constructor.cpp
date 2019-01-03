#include <iostream>

using namespace std;

class carrotlabz
{
    private:
        int id;
        string name;
    public:
        carrotlabz(int eid, string ename):id(eid),name(ename)
        {}
        
        carrotlabz():id(-1),name("UnKnown")
        {}

        void printdata()
        {
            cout << "ID = " << id << endl
                 << "Name = " << name << endl;
        }

        void display();
};

void carrotlabz::display()
{
    cout <<"Display" << endl
         <<"ID = " << id << endl
         <<"Name = " << name << endl;
}

int main()
{
    carrotlabz c1(12,"Mohit"), c2;
    c1.printdata();
    c2.display();

    return 0;
}