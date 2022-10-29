#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,i=1;
    cin >> t;
    while(t--)
    {
        int n,k,count=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
            {
                count++;
            }
        }
        cout << "Case #" << i << ": " <<abs(count - k) << endl;
        i++;
    }
    return 0;
}
