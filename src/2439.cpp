#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        for(int j=0; j<N - i; j++)
        {
            cout << " ";
        }
        for(int j=N - i; j<N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
