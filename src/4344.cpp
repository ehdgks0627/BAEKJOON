#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int C, t,  num, *score;
    double avr;
    cin >> C;
    cout.precision(3);
    cout << fixed;
    for(int i=0; i<C; i++)
    {
        cin >> t;
        avr = num = 0;
        score = new int[t];
        for(int j=0; j<t; j++)
        {
            cin >> score[j];
            avr += score[j];
        }
        avr /= t;
        for(int j=0; j<t; j++)
        {
            if(score[j] > avr)
            {
                num++;
            }
        }
        cout << (double)num / t * 100<< "%" << endl;
        delete []score;
    }
    return 0;
}
