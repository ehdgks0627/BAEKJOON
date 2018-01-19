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
    int N, n, cnt = 0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> n;
        cnt += is_prime(n);
    }
    cout << cnt << endl;
    return 0;
}
