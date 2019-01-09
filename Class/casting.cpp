#include <iostream>

using namespace std;


class Distance
{
    private:
        int feet;
        float inch;
        int convFactor;
    public:
        Distance():convFactor(3.2808){}

        Distance(float mtrs):convFactor(3.2808)
        {
            float ft = mtrs * convFactor;
            feet = ft;
            inch = 12 * (ft-feet);
        }

        Distance(int ft, float in):feet(ft),inch(in),convFactor(3.2808)
        {
        }

        void display()
        {
            cout << "Distance is " << feet << "ft and " << inch << "inch" << endl;
        }

        operator float()
        {
            float distMtr = feet;
            distMtr += inch/12;
        }
};

int main()
{
    Distance d1(5,12.0);
    Distance d2;
    float mtr=0.0;
    d1.display();
    d2 = static_cast<Distance>(4);  
    d2.display();
    mtr = d1;   //implicit casting using conversion operator
    cout << "D1 in mtr  = " << mtr << endl;
    mtr = static_cast <float>(d2);  //explicit casting using conversion operator
    cout << "D2 in mtr  = " << mtr << endl;
    return 0;
}