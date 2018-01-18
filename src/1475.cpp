#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int vec[10] = {0, }, max_offset = 0;
    char c;
    while((c = getchar()) != EOF)
    {
        vec[c - '0']++;
    }
    vec[9] += vec[6] + 1;
    vec[6] = 0;
    for(int i=0; i<9; i++)
    {
        if(vec[max_offset] < vec[i])
        {
            max_offset = i;
        }
    }
    if(vec[max_offset] < (vec[9] / 2))
    {
        cout << vec[9] / 2 << endl;
    }
    else
    {
        cout << vec[max_offset] << endl;
    }
    return 0;
}
