#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int x, y, day = 0;
    cin >> x >> y;
    for(int i=0; i<x - 1; i++)
    {
        day += days[i];
    }
    day += y;
    day %= 7;
    switch(day)
    {
        case 0:
            cout << "SUN" << endl;
            break;

        case 1:
            cout << "MON" << endl;
            break;

        case 2:
            cout << "TUE" << endl;
            break;

        case 3:
            cout << "WED" << endl;
            break;

        case 4:
            cout << "THU" << endl;
            break;

        case 5:
            cout << "FRI" << endl;
            break;

        case 6:
            cout << "SAT" << endl;
            break;

    }
    return 0;
}
