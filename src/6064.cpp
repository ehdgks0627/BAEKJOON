#include <iostream>
using namespace std;

int gcd(int m, int n) {
    int r;
    while(true) {
        r = m % n;
        if (r == 0) return n;
        else {
            m = n;
            n = r;
        }
    }
}

int gcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main(int argc, char *argv[])
{
    int T, M, N, x, y;
    bool done;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        done = false;
        cin >> M >> N >> x >> y;
        int g = gcm(M, N);
        for(int j=(M + x) % M; j<g; j+=M)
        {
            if((j - x) % M == 0 && (j - y) % N == 0)
            {
                cout << j << endl;
                done = true;
                break;
            }
        }
        if(!done)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
