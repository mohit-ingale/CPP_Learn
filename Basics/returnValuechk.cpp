#include <iostream>

using namespace std;
float convert_func(int val);
int main()
{
    int value  = 5;
    float ret;
    ret = convert_func(5);
    cout << "ret = " << ret << endl;
}

float convert_func(int val)
{
    return static_cast<float>(0.4569*val);
}