#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int sum = 0, score;
    for(int i=0; i<5; i++)
    {
        cin >> score;
        sum += (score >= 40) ? score : 40;
    }
    cout << sum / 5 << endl;
    return 0;
}
