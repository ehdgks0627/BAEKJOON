#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, n, arr[10001] = {0, };
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> n;
        arr[n]++;
    }
    for(int i=0; i<10001; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout << i << '\n';
        }
    }
    return 0;
}
