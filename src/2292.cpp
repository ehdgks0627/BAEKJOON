#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, i, now = 1;
    cin >> N;
    for(i=1;;i++)
    {
        if(N <= now)
        {
            break;
        }
        now += 6*i;
    }
    cout << i << endl;
    return 0;
}
