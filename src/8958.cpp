#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, score, correct;
    string s;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        score = correct = 0;
        cin >> s;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j] == 'O')
            {
                score += ++correct;
            }
            else
            {
                correct = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}
