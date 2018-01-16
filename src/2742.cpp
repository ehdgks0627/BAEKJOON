#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    for(int i=N; i>=1; i--)
    {
        /*
         * cout << endl은 printf("\n") 이나 cout << '\n' 보다 훨씬 느리다고 함
         * 성능 이슈로 인해 '\n' 사용
        */
        cout << i << '\n';
    }
    return 0;
}
