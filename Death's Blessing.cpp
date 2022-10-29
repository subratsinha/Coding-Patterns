/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, sum = 0, mx = 0;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += b[i];
            mx = max(mx , b[i]);
        }
        cout << sum - mx << endl;
    }
    return 0;
}
