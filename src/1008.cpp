#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    double num[2];
    cout << fixed;
    cout.precision(9);
    cin >> num[0] >> num[1];
    cout << num[0] / num[1];
    return 0;
}
