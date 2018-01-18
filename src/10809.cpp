#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int vec[26] = {0, }, n, pos;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        pos = s[i] - 'a';
        if(vec[pos] == 0)
        {
            vec[pos] = i + 1;
        }
    }
    for(int i=0; i<26; i++)
    {
        cout << vec[i] - 1 << " ";
    }
    return 0;
}
