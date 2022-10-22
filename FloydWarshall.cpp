/*The Floyd Warshall Algorithm is for solving all pairs shortest path problems. The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed Graph. 

Floyd Warshall Algorithm:
Initialize the solution matrix same as the input graph matrix as a first step. 
Then update the solution matrix by considering all vertices as an intermediate vertex. 
The idea is to one by one pick all vertices and updates all shortest paths which include the picked vertex as an intermediate vertex in the shortest path. 
When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. 
For every pair (i, j) of the source and destination vertices respectively, there are two possible cases. 
k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is. 
k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j] if dist[i][j] > dist[i][k] + dist[k][j]
Problem Link:
https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/*/

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        long long int graph[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    graph[i][j]=0;
                else
                {
                    graph[i][j]=INT_MAX;
                }
            }
        }
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]][edges[i][1]]=edges[i][2];
            graph[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        long long int dist[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              dist[i][j]=graph[i][j];
            }
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        int res=0;
        //int cnt=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
           int cnt=0;
            for(int j=0;j<n;j++)
            {
              if(i!=j && dist[i][j]<=distanceThreshold)
                  cnt++;
            }
            if(cnt < ans)
            {
                ans=cnt;
                res=i;
            }
            else if(cnt==ans)
            {
                res=max(res,i);
            }
           // cout<<ans<<" "<<res;
        }
        return res;
    }
};
