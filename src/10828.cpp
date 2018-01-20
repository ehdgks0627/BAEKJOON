#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, item, poc = 0, buf[10000] = {0, };
    string command;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> command;
        if(command == "push")
        {
            cin >> item;
            buf[poc++] = item;
        }
        else if(command == "pop")
        {
            if(poc == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << buf[--poc] << '\n';
            }
        }
        else if(command == "top")
        {
            if(poc == 0)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << buf[poc - 1] << '\n';
            }
        }
        else if(command == "size")
        {
            cout << poc << '\n';
        }
        else if(command == "empty")
        {
            if(poc == 0)
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
