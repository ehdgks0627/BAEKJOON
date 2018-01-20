#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, num, poc = 0, now = 1, buf[100000];
    string output;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> num;
        while(now <= num)
        {
            //TODO validate
            buf[poc++] = now++;
            output += "+\n";
        }
        if(poc == 0 || buf[poc - 1] != num)
        {
            cout << "NO\n";
            return 0;
        }
        output += "-\n";
        poc--;
    }
    cout << output;
    return 0;
}
