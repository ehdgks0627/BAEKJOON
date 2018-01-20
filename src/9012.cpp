#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int T, poc;
    string s;
    bool done;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        done = false;
        poc = 0;
        cin >> s;
        for(int j=0; j<s.length(); j++)
        {
            switch(s[j])
            {
                case '(':
                    poc++;
                    break;
                case ')':
                    if(poc == 0)
                    {
                        done = true;
                    }
                    else
                    {
                        poc--;
                    }
                    break;
            }
            if(done)
            {
                break;
            }
        }
        if(!done && poc == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
