#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string s;
    getline(cin, s);
    if (!s.compare("1 2 3 4 5 6 7 8"))
    {
        cout << "ascending";
    }
    else if(!s.compare("8 7 6 5 4 3 2 1"))
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
    return 0;
}
