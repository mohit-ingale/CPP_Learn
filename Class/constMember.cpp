#include <iostream>

using namespace std;


class checkConstant
{
    private:
        int data;

    public:
        void modifyData()
        {
            data = 60;
        }

        void againModify() const
        {
            data = 40;      /*Illegal Operation lvalue is not modifiable*/
        }
}