#include <iostream>
using namespace std;

int reverse_int(int n)
{
    int result = 0;
    while(n)
    {
        result *= 10;
        result += n%10;
        n /= 10;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int A, B;
    cin >> A >> B;
    A = reverse_int(A);
    B = reverse_int(B);
    cout << ((A > B) ? A : B) << endl;
    return 0;
}
