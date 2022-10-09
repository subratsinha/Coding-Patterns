/**
 *		author 	:	ujjwalru_224
**/

#include <iostream>
#include <vector>
using namespace std;

void subseq(int ind , vector<int> &v , int a[], int n)
{
	if(ind == n)
	{
		for(auto it : v)
		{
			cout << it << " ";
		}
		cout << "\n";
		return;
	}
	v.push_back(a[ind]);
	subseq(ind + 1, v, a, n);
	v.pop_back();
	subseq(ind + 1, v, a, n);
}

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	int a[3] = {2, 5, 4};
	int n = 3;
	vector<int> v;
	subseq(0, v, a, n);
	cout << "finished";
	return 0;
}
