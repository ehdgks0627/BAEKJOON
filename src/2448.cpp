#include <iostream>
using namespace std;

void draw(char **buf, int x, int y)
{
    buf[y][x] = '*';
    buf[y+1][x-1] = '*';
    buf[y+1][x+1] = '*';
    for(int i=x-2; i<=x+2; i++)
    {
        buf[y+2][i] = '*';
    }
}

void copy(char **buf, int x, int y, int _level)
{
    int level = 3;
    for(int i=1; i<_level; i++)
    {
        level += level;
    }
    x -= level;
    for(int i=0; i<level; i++)
    {
        for(int j=0; j<level*2; j++)
        {
            buf[y + level + i][x - level + j] = buf[y + i][x + j];
            buf[y + level + i][x + level + j] = buf[y + i][x + j];
        }
    }
}

int reverse_pow(int n)
{
    int cnt = 0, sum = 1;
    while(n != sum)
    {
        cnt++;
        sum *= 2;
    }
    return cnt;
}

int main(int argc, char *argv[])
{
    int N;
    char **buf;
    cin >> N;
    buf = new char*[N];
    for(int i=0; i<N; i++)
    {
        buf[i] = new char[N * 2];
        for(int j=0; j<N*2; j++)
        {
            buf[i][j] = ' ';
        }
    }
    draw(buf, N, 0);
    for(int i=1; i<=reverse_pow(N/3); i++)
    {
        copy(buf, N, 0, i);
    }

    for(int i=0; i<N; i++)
    {
        for(int j=1; j<N*2; j++)
        {
            cout << buf[i][j];
        }
        cout << endl;
    }


    for(int i=0; i<N; i++)
    {
        delete []buf[i];
    }
    delete []buf;
    return 0;
}
