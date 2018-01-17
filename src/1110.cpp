#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, _N, cnt = 0;
    cin >> N;
    _N = N;
    do
    {
        N = ((N % 10) * 10) + (N / 10 + N % 10) % 10;
        cnt++;
    }while(N != _N);
    cout << cnt;
    return 0;
}
