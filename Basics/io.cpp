/*
@Input Output Example
@Created on Tue Dec 25 18:02:54 2018
@author: Mohit Ingale
*/

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