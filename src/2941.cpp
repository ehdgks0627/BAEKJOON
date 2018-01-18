#include <iostream>
#include <cstring>
using namespace std;

int find_croatia(char *s)
{
    if(!strncmp(s, "c=", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "c-", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "dz=", 3))
    {
        return 3;
    }
    else if(!strncmp(s, "d-", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "lj", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "nj", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "s=", 2))
    {
        return 2;
    }
    else if(!strncmp(s, "z=", 2))
    {
        return 2;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    string s;
    int len = 0;
    cin >> s;
    for(int i=0; i<s.length();)
    {
        len++;
        i += find_croatia((char*)&s.c_str()[i]);
    }
    cout << len << endl;
    return 0;
}
