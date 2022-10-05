/**
 *		author : rhsajal_017
**/

#include <iostream>
using namespace std;

bool palin(int i, string &s, int n)
{
	if(i == n / 2)
	{
		return true;
	}
	if(s[i] != s[n - i - 1])
	{
		return false;
	}
	palin(i + 1, s, n);
}

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	if(palin(0, s, n))
	{
		cout << "The string " << s << " is a palindrome." << endl;
	}
	else
	{
		cout << "The string " << s << " is not a palindrome." << endl;
	}
	return 0;
}
