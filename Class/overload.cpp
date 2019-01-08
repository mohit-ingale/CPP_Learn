#include <iostream>
#include <string.h>

using namespace std;

class HomeBrew
{
    private:
        int len;
        char str[50];
        static int i;
    public:
        HomeBrew()
        {}
        HomeBrew(char & iStr)
        {
            int i = 0;
            while(*(&iStr + i)){
                str[i++] = *(&iStr + i);
            }

            str[i] = '\0';
        }
        void operator ++ ()
        {

            str[i++] = 'c';
        }

        HomeBrew operator + (HomeBrew h2)
        {
            strcat(str,h2.str);
            return HomeBrew(*str);
        }

        void display()
        {
            cout << str << endl;
        }
};
int HomeBrew:: i = 0;
int main()
{
    char * ss = "Hello";
    char * ss2 = "India";
    HomeBrew h1 (*ss);
    HomeBrew h2 (*ss2);
    HomeBrew h3;
    h1.display();
    ++h1;
    h1.display();
    ++h1;
    h1.display();
    ++h1;
    h1.display();
    h3 = h1 + h2;
    h3.display();
    return 0;
}