/* 

                  Strongly Connected Component Using KosaRaju's Algorithm
                                    
                                    
                                    */
/* Author: 
          
          shankhdhar234himanshu@gmail.com
  
                                              */      
          
#include<bits/stdc++.h>
#define code lli n,k;cin>>n>>k;lli a[n];loop0(i,n) cin>>a[i]
#define lli long long int
#define toh_shuru_karte_hai_bina_kise_bakchodi_ke ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define test lli t;cin>>t;while(t--)
#define arrin lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++)cin>>a[i]       
#define mod 1000000007
#define pb push_back
#define loop0(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)
#define rev0(i,n)  for(int i=n-1; i>=0; i--)
#define rev1(i,n)  for(int i=n; i>0; i--)
using namespace std;
vector<lli>adj[100005],trans[100005];
bool vis[100005];
vector<lli>order,SCC;
void dfs(lli node)
{
    vis[node]=true;
    for(auto x:adj[node])
    {
        if(!vis[x])
        {
            dfs(x);
        }
    }
    order.pb(node);
}
void dfs1(lli node)
{
    vis[node]=true;
    for(auto x:trans[node])
    {
        if(!vis[x])
        {
            dfs1(x);
        }
    }
    SCC.pb(node);
}
int main()
{
    test{
        order.clear();
        SCC.clear();
        lli n,m;
        cin>>n>>m;
        loop1(i,n)
        vis[i]=false,adj[i].clear(),trans[i].clear();
        while(m--)
        {
            lli a,b;
            cin>>a>>b;
            adj[a].pb(b);
            trans[b].pb(a);
        }
        for(lli i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
        loop1(i,n)
        vis[i]=false;
        rev0(i,n)
        {
            if(!vis[order[i]])
            {
                SCC.clear();
                dfs1(order[i]);
                for(auto x:SCC)
                {
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }
    }
}