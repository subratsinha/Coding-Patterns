/* Author: 
          
          shankhdhar234himanshu@gmail.com
  
                                              */    
/* Problem is , when we want to check such that we can divide the given graph into two subgraphs such that no two adjacent 
vertices belongs to same subgraph */

/*Time Complexity : O(V+E) by using adjacency list

Space Complexity : O(V) due to queue and color array.*/
          
#include<bits/stdc++.h>
#define code lli n,k;cin>>n>>k;lli a[n];loop0(i,n) cin>>a[i]
#define lli long long int
#define test lli t;cin>>t;while(t--)
#define arrin lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++)cin>>a[i]       
#define mod 1000000007
#define pb push_back
#define loop0(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)
#define rev0(i,n)  for(int i=n-1; i>=0; i--)
#define rev1(i,n)  for(int i=n; i>0; i--)
using namespace std;
vector<lli>adj[100005];
bool vis[100005];
lli color[100005];
bool bfs(lli node)
{
    queue<lli>q;
    q.push(node);
    vis[node]=true;
    while(!q.empty())
    {
        auto z=q.front();
        q.pop();
        for(auto x:adj[z])
        {
            if(vis[x]&&color[x]==color[z])
            {
                return false;
            }
            else if(!vis[x])
            {
                vis[x]=true;
                q.push(x);
                color[x]=color[z]^1;
            }
        }
    }
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
lli n,m;
cin>>n>>m;
loop1(i,n)
vis[i]=false,adj[i].clear(),color[i]=0;
while(m--)
{
    lli a,b;
    cin>>a>>b;
    adj[a].pb(b);
    adj[b].pb(a);
}
int f=0;
for(int i=1;i<=n;i++)
{
    if(vis[i]==false)
    {
        bool ans=bfs(i);
        if(ans==0)
        {
            f=1;
            break;
        }
    }
}
if(f==1)
cout<<"Not a bipartite Graph\n";
else
cout<<"Is a bipartite Graph\n";
}