#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int T, poc, buf[30], vec[30] = { 0, }, sum, depth;
	string s;
	bool done;
	done = false;
	poc = sum = depth = 0;
	cin >> s;
	for (int i = 0; i<s.length(); i++)
	{
		switch (s[i])
		{
		case '(':
			buf[poc++] = '(';
			depth++;
			break;
		case '[':
			buf[poc++] = '[';
			depth++;
			break;
		case ')':
			if (poc == 0)
			{
				done = true;
			}
			else
			{
				if (buf[--poc] != '(')
				{
					done = true;
				}
				else
				{
					if(vec[depth] == 0)
                    {
                        vec[depth - 1] += 2;
                    }
                    else
                    {
                        vec[depth - 1] += 2 * vec[depth];
                    }
					vec[depth--] = 0;
                }
			}
			break;
		case ']':
			if (poc == 0)
			{
				done = true;
			}
			else
			{
				if (buf[--poc] != '[')
				{
					done = true;
				}
				else
				{
					if(vec[depth] == 0)
                    {
                        vec[depth - 1] += 3;
                    }
                    else
                    {
                        vec[depth - 1] += 3 * vec[depth];
                    }
					vec[depth--] = 0;
				}
			}
			break;
		}
		if (done)
		{
			break;
		}
	}
	if (done || poc != 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << vec[0] << endl;
	}
	return 0;
}
