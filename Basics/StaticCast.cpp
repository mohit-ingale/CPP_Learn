#include<iostream>
using namespace std;
int main(){
        int var = 1500000000;
        cout << "var = " << var << endl;
        var = (var *10)/10;
        cout << "var after multiply = " << var << endl;
        var = 1500000000;
        var = (static_cast<double>(var) * 10)/10;
        cout << "var after multiply by casting = " << var << endl;
        return 0;
}
