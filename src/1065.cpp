#include <iostream>
using namespace std;

bool isHanSu(int n)
{
    int gap;
    if(n < 100)
    {
        return true;
    }
    else
    {
        gap = ((n / 10) % 10) - (n % 10);
        do
        {
            if((((n / 10) % 10) - (n % 10)) != gap)
            {
                return false;
            }
            n /= 10;
        }while(n >= 10);
        return true;
    }
}

int main(int argc, char *argv[])
{
    int N, cnt = 0;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        if(isHanSu(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
