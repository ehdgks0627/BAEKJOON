#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(i !=0 && i % 10 == 0)
        {
            cout << endl;
        }
        cout << s[i];
    }
    return 0;
}
