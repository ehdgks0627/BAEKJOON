#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int T, H, W, N;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> H >> W >> N;
        N--;
        cout << (N % H + 1) * 100 + (N / H + 1) << endl;
    }
    return 0;
}
