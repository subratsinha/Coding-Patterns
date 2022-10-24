/*Dijkstra doesn’t work for Graphs with negative weights, Bellman-Ford works for such graphs. Bellman-Ford is also simpler than Dijkstra and suites well for distributed systems. But time complexity of Bellman-Ford is O(V * E), which is more than Dijkstra. 

Steps for finding the shortest distance to all vertices from the source using the Bellman-Ford algorithm:

This step initializes distances from the source to all vertices as infinite and distance to the source itself as 0. Create an array dist[] of size |V| with all values as infinite except dist[src] where src is source vertex.
This step calculates shortest distances. Do following |V|-1 times where |V| is the number of vertices in given graph. Do following for each edge u-v 
If dist[v] > dist[u] + weight of edge uv, then update dist[v] to
dist[v] = dist[u] + weight of edge uv
This step reports if there is a negative weight cycle in the graph. Again traverse every edge and do following for each edge u-v 
……If dist[v] > dist[u] + weight of edge uv, then “Graph contains negative weight cycle” 
The idea of step 3 is, step 2 guarantees the shortest distances if the graph doesn’t contain a negative weight cycle. If we iterate through all edges one more time and get a shorter path for any vertex, then there is a negative weight cycle*/

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int>dist(n+1,INT_MAX);
    dist[src]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            int u=edges[j][0];
            int v=edges[j][1];
            int cost=edges[j][2];
            if(dist[u]!=INT_MAX && dist[v]>dist[u]+cost)
            {
                dist[v]=dist[u]+cost;
            }
        }
    }
    if(dist[dest]==INT_MAX)
        return 1000000000;
    return dist[dest];
}