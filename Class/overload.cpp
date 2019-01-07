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

            str[i] = 'c';
        }
};
int HomeBrew:: i = 0;
int main()
{
    char * ss = "Hello";
    HomeBrew h1 (*ss);
    ++h1;
    return 0;
}