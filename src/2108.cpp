#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int N, n, sum, cnt, max_offset, prev_max_offset, start, end, vec[8001] = {0, };
    bool done = false;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> n;
        vec[n + 4000]++;
    }
    sum = cnt = max_offset = prev_max_offset = 0;
    start = end = -1;
    for(int i=0; i<8001; i++)
    {
        sum += vec[i] * (i - 4000);
        if(vec[max_offset] < vec[i])
        {
            prev_max_offset = max_offset;
            max_offset = i;
        }
        if(start == -1 && vec[i])
        {
            start = i;
        }
    }
    cout << floor(sum / (double)N + 0.5) << endl;
    for(int i=0; i<8001; i++)
    {
        if(vec[i])
        {
            cnt += vec[i];
        }
        if(cnt >= ((N / 2) + 1))
        {
            cout << i - 4000 << endl;
            break;
        }
    }
    for(int i=0; i<8001; i++)
    {
        if(vec[max_offset] == vec[i] && max_offset != i)
        {
            cout << i - 4000 << endl;
            done = true;
            break;
        }
    }
    if(!done)
    {
        cout << max_offset - 4000 << endl;
    }
    for(int i=8000; i>=0; i--)
    {
        if(vec[i])
        {
            end = i;
            break;
        }
    }
    cout << end - start << endl;

    return 0;
}
