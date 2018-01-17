#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, X, A;
    cin >> N >> X;
    for(int i=0; i<N; i++)
    {
        cin >> A;
        if (A < X)
        {
            cout << A << " ";
        }
    }
    return 0;
}
