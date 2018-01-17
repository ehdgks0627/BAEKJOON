#include <iostream>
using namespace std;

int dn(int n)
{
    int sum = n;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    bool flag[10001] = {false, };
    int tmp;
    for(int i=0; i<10000; i++)
    {
        tmp = dn(i);
        if(tmp <= 10000)
        {
            flag[tmp] = true;
        }
    }
    for(int i=0; i<10000; i++)
    {
        if(!flag[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}
