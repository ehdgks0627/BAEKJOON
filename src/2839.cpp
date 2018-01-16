#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, num3 = 0, num5 = 0;
    cin >> N;
    while(N > 0)
    {
        if(!(N % 5))
        {
            num5 = N / 5;
            N -= num5 * 5;
            break;
        }
        N -= 3;
        num3 += 1;
    }
    if(N == 0)
    {
        cout << num3 + num5;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
