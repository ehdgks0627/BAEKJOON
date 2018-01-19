#include <iostream>
using namespace std;

int vec[123456 * 2 + 1];

int is_prime(int n)
{
    return vec[n];
}

int main(int argc, char *argv[])
{
    int N = 0, cnt;
    for(int i=0; i<=123456 * 2; i++)
    {
        vec[i] = 1;
    }
    for(int i=2; i<=123456 * 2; i++)
    {
        if(vec[i] == 0)
        {
            continue;
        }
        for(int j=i*2; j <= 123456 * 2; j+=i)
        {
            vec[j] = 0;
        }
    }

    while(true)
    {
        cnt = 0;
        cin >> N;
        if(N == 0)
        {
            break;
        }
        for(int i=N + 1; i<=N*2; i++)
        {
            cnt += is_prime(i);
        }
        cout << cnt << '\n';
    }
    return 0;
}
