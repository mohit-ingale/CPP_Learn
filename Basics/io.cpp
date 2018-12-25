#include<iostream>

using namespace std;

int main()
{
    int temp = 0;
    cout << "Enter the Temperature in celsius" << endl;
    cin >> temp;
    int ftemp = (temp+32)*9/5;
    cout << "temperature in Farenheit is " << ftemp << endl;
    return 0;
}