#include <iostream>
using namespace std;

int get_offset(char c)
{
    switch(c)
    {
        case 'A':
        case 'B':
        case 'C':
            return 2;
        case 'D':
        case 'E':
        case 'F':
            return 3;
        case 'G':
        case 'H':
        case 'I':
            return 4;
        case 'J':
        case 'K':
        case 'L':
            return 5;
        case 'M':
        case 'N':
        case 'O':
            return 6;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 7;
        case 'T':
        case 'U':
        case 'V':
            return 8;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return 9;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    string s;
    int cost = 0;
    cin >> s;
    cost += s.length();
    for(int i=0; i<s.length(); i++)
    {
        cost += get_offset(s[i]);
    }
    cout << cost << endl;
    return 0;
}
