#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int cg , cp, n, score1, score2, cost1 = 0, cost2 = 0;
		cin >> cg >> cp;
		cin >> n;
		for(int j = 1; j <= n; j++)
		{
			cin >> score1 >> score2;
			cost1 = cost1 + score1 * cg + score2 * cp;
			cost2 = cost2 + score1 * cp + score2 * cg;
		}
		if(cost1 > cost2)
		{
			cout << cost2 << endl;
		}
		else
		{
			cout << cost1 << endl;
		}	
	}
	return 0;
}
