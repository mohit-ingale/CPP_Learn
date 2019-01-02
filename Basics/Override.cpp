#include <iostream>

using namespace std;

void print(int number)
{
    cout << "Number in Integer = " << number << endl;
}

void print(char *number)
{
    cout << "Number in String = " << number << endl;
}

int main()
{
    print(10);
    print("20");
    return 0;
}