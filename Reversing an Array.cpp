/**
 *		author : rhsajal_017
**/

#include <iostream>
using namespace std;

void reverse(int i, int a[], int n)
{
	if(i == n / 2)
	{
		return;
	}
	swap(a[i] , a[n - i - 1]);
	reverse(i + 1, a, n);
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	reverse(0, a, n);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
