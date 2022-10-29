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
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'Q')
            {
                st.push(s[i]);
            }
            else if(!st.empty())
            {
                st.pop();
            }
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}
