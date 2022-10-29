#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t; cin >> t; while(t--){
ll n,a,b,i,ma=0,l=0,w,mi;
cin>>n;
for(i=0;i<n;i++){
    cin>>a>>b;
    mi=min(a,b);
    l+=mi;
    ma=max(ma,max(a,b));
 
}
cout<<2*(l+ma)<<endl;
 
}
return 0;
}
