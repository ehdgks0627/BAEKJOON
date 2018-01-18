#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int vec[26] = {0, }, M = 0, max_count = 0;
    char c;
    while((c = getchar()) != EOF)
    {
        if('A' <= c && c <= 'Z')
        {
            c += 0x20;
        }
        vec[c - 'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(vec[M] < vec[i])
        {
            M = i;
        }
    }
    for(int i=0; i<26; i++)
    {
        if(M != i && vec[M] == vec[i])
        {
            cout << "?" << endl;
            return 0;
        }
    }
    cout << (char)('A' + M);
    return 0;
}
