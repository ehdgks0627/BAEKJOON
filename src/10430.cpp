#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    cout << (num[0] + num[1]) % num[2] << endl;
    cout << (num[0] % num[2] + num[1] % num[2]) % num[2] << endl;
    cout << (num[0] * num[1]) % num[2] << endl;
    cout << (num[0] % num[2] * num[1] % num[2]) % num[2];
    return 0;
}
