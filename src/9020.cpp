#define SIZE 10000
#include <iostream>
using namespace std;

int vec[SIZE * 2 + 1];

int is_prime(int n)
{
    return vec[n];
}

int main(int argc, char *argv[])
{
    int T, n;
    cin >> T;

    for(int i=0; i<=SIZE * 2; i++)
    {
        vec[i] = 1;
    }
    for(int i=2; i<=SIZE * 2; i++)
    {
        if(vec[i] == 0)
        {
            continue;
        }
        for(int j=i*2; j <= SIZE * 1; j+=i)
        {
            vec[j] = 0;
        }
    }
    for(int i=0; i<T; i++)
    {
        cin >> n;
        for(int i=n/2; i>=2; i--)
        {
            if(is_prime(i) && is_prime(n - i))
            {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}
