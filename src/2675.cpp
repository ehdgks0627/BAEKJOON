#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int T, n;
    string s;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> n;
        cin >> s;
        for(int j=0; j<s.length(); j++)
        {
            for(int k=0; k<n; k++)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}
