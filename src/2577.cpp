#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int A, B, C, n, vec[10] = {0, };
    cin >> A >> B >> C;
    n = A * B * C;
    while(n)
    {
        vec[n % 10]++;
        n /= 10;
    }
    for(int i=0; i<10; i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}
