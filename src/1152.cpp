#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int cnt = 0;
    char *ptr;
    string buf;
    getline(cin, buf);
    ptr = strtok((char*)buf.c_str(), " ");
    while(ptr)
    {
        cnt++;
        ptr = strtok(NULL, " ");
    }
    cout << cnt << endl;
    return 0;
}
