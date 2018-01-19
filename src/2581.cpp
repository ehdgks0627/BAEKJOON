#include <iostream>
using namespace std;

int is_prime(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    for(int i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int M, N, sum = 0, min_prime = -1;
    cin >> M >> N;
    for(int i=M; i<=N; i++)
    {
        if(is_prime(i))
        {
            if(min_prime == -1)
            {
                min_prime = i;
            }
            sum += i;
        }
    }
    if(min_prime == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << endl;
        cout << min_prime << endl;
    }
    return 0;
}
