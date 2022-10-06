/**
 *		author 	:	ujjwalru_224
**/

#include <bits/stdc++.h>
using namespace std;

void subseqsum(int ind, vector<int> &v, int s, int sum, int a[], int n)
{
	if(ind == n)
	{
		if(s == sum)
		{
			for(auto it : v)
			{
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}
	v.push_back(a[ind]);
	s += a[ind];
	
	subseqsum(ind + 1, v, s, sum, a, n);
	s -= a[ind];
	v.pop_back();
	subseqsum(ind + 1, v, s, sum, a, n);	
}

int main()
{
	int a[] = {1, 2, 3, 4, 3};
	int sum = 6;
	int n = sizeof(a) / sizeof(a[0]);
	vector<int> v;
	subseqsum(0, v, 0, sum, a, n);
	return 0;
}
