/*
@Static Cast Example and Use
@Created on Tue Dec 25 18:02:54 2018
@author: Mohit Ingale
*/

#include<iostream>
using namespace std;

int main()
{
        int var = 1500000000;
        cout << "var = " << var << endl;                                //print original value
        var = (var *10)/10;                                             //Result will be wrong as multiplication will exceed the int range
        cout << "var after multiply = " << var << endl;

        var = 1500000000;
        var = (static_cast<double>(var) * 10)/10;                       //By static casting we can increase limit temporary to do calculation and save correct value
        cout << "var after multiply by casting = " << var << endl;

        return 0;
}
