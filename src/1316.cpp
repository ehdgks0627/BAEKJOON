#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    bool vec[26] = {0, };
    int N, cnt = 0;
    string s;
    char prevC;
    cin >> N;
    for(int i=0;i <N; i++)
    {
        cin >> s;
        if(s.length() == 1)
        {
            cnt++;
            continue;
        }
        prevC = s[0];
        vec[s[0] - 'a'] = true;
        for(int j=1;j <s.length(); j++)
        {
            if(prevC != s[j])
            {
                if(vec[s[j] - 'a'])
                {
                    break;
                }
                else
                {
                    vec[s[j] - 'a'] = true;
                    prevC = s[j];
                }
            }
            if(j == (s.length() - 1))
            {
                cnt++;
            }
        }
        for(int j=0; j<26; j++)
        {
            vec[j] = false;
        }
    }
    cout << cnt << endl;
    return 0;
}
