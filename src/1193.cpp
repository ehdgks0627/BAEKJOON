#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int dividend = 1, divisor = 1, X, sw = -1;
    cin >> X;
    for(int i=1; i<X; i++)
    {
        if((sw == 1 && divisor == 1) || (sw == -1 && dividend == 1))
        {
            sw *= -1;
            if(sw == 1)
            {
                divisor += dividend;
                dividend = 1;
            }
            else
            {
                dividend += divisor;
                divisor = 1;
            }
        }
        else
        {
            dividend += sw;
            divisor -= sw;
        }
    }
    cout << dividend << "/" << divisor << endl;
    return 0;
}
