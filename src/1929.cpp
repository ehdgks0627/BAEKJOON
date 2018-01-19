#include <iostream>
using namespace std;

int is_prime(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    for(int i=2; i * i <= n; i++)
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
    int M, N;
    cin >> M >> N;
    for(int i=M; i<=N; i++)
    {
        if(is_prime(i))
        {
            cout << i << '\n';
        }
    }
    return 0;
}
