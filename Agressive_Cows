#include<bits/stdc++.h>
#define fastio()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll        long long int
#define lld       long long double
#define p 		  printf
#define si(x)     scanf("%I64d",&x)
#define sl(x)     scanf("%lld",&x)
#define ss(x)     scanf("%s",&s)
#define pi(x)     printf("%I64d\n",x)
#define pl(x)     printf("%lld\n",x)
#define ps(s)     printf("%s\n",s)
#define deb1(x)   cout<<#x<<"="<<x
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb        emplace_back
#define F         first
#define S         second
#define pii       pair<int,int>
#define pll       pair<ll,ll>
#define vec       vector<int,int>
#define nline     "\n"
#define PI        3.1415926535897932384626
using namespace std;
bool canplacecows(vector<int>v, int size, int cows, int dist) {
	int coordinate = v[0];
	int cnt = 1;
	for (int i = 1; i < size; i++) {
		if (v[i] - coordinate >= dist) {
			cnt++;
			coordinate = v[i];
		}
		if (cows == cnt) return true;
	}
	return false;
}
int aggrcows(int cows, int size, vector<int>v) {
	sort(v.begin(), v.end());
	int low = 1;
	int res = -1;
	int high = v[size - 1] - v[0];
	while (low <= high) {
		int mid = (low + high) >> 1;
		if (canplacecows(v, size, cows, mid)) {
			res = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return high; // return res;
}

int main() {
	fastio();
	int t;
	int n, cows;
	vector<int>v;
	cin >> t;
	while (t--) {
		cin >> n >> cows;
		v.resize(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		cout << aggrcows(cows, n, v) << endl;
	}
}
