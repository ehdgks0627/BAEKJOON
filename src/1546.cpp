#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int N, M = 0, *score;
    double sum = 0;

    cin >> N;
    score = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> score[i];
        if(score[M] < score[i])
        {
            M = i;
        }
    }
    for(int i=0; i<N; i++)
    {
        sum += (double)score[i] / score[M] * 100;
    }
    sum /= N;
    cout << sum;

    delete []score;
    return 0;
}
