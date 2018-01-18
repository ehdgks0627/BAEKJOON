#include <iostream>
using namespace std;

int get_people(int k, int n)
{
    if(k == 0)
    {
        return n;
    }
    else
    {
        int sum = 0;
        for(int i=1; i<=n; i++)
        {
            sum += get_people(k - 1, i);
        }
        return sum;
    }
}

int main(int argc, char *argv[])
{
    int T, k, n;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> k >> n;
		cout << get_people(k, n) << endl;
    }
    return 0;
}
