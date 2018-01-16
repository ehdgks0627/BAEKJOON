#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, sum = 0;
    char c;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        sum += c - '0';
    }
    cout << sum << endl;
    return 0;
}
