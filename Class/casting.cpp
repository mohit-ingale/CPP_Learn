#include <iostream>

using namespace std;


class Distance
{
    private:
        int feet;
        float inch;
        int convFactor;
    public:
        Distance():convFactor(3.280833F){}

        Distance(float mtrs):convFactor(3.280833F)
        {
            float ft = mtrs * convFactor;
            feet = ft;
            inch = 12 * (ft-feet);
        }

        Distance(int ft, float in):feet(ft),inch(in),convFactor(3.280833F)
        {
        }

        void display()
        {
            cout << "Distance is " << feet << "ft and " << inch << "inch" << endl;
        }

        operator float()
        {
            float distMtr = inch/12;
            distMtr += feet;
            return distMtr;
        }
};

int main()
{
    Distance d1(5,11.0);
    Distance d2;
    float mtr=0.0;
    d1.display();
    d2 = static_cast<Distance>(6);
    d2.display();
    mtr = d1;   //implicit casting using conversion operator
    cout << "D1 in mtr  = " << mtr << endl;
    mtr = static_cast <float>(d2);  //explicit casting using conversion operator
    cout << "D2 in mtr  = " << mtr << endl;
    return 0;
}