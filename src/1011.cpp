#include <iostream>
using namespace std;

int dp[50000] = {0, };

int sum(int n)
{
    return dp[n];
}

int calculate(int left, int k)
{
    if(sum(k) <= (left - (k + 1)))
    {
        return 1;
    }
    else if(sum(k-1) <= (left - k))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char *argv[])
{
    int T, x, y, k = 0, cnt, sum = 0;
    for(int i=0; i<50000; i++)
    {
        sum += i;
        dp[i] = sum;
    }
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cnt = k = 0;
        cin >> x >> y;
        int left = y - x;
        while(left)
        {
            k += calculate(left, k);
            left -= k;
            cnt++;
            if(left == 1 && k == 1)
            {
                cnt++;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
