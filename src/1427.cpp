#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char c;
    int vec[10] = {0, };
    while((c = getchar()) != EOF)
    {
        vec[c - '0']++;
    }
    for(int i=9; i>=0; i--)
    {
        for(int j=0; j<vec[i]; j++)
        {
            cout << i;
        }
    }
    return 0;
}
