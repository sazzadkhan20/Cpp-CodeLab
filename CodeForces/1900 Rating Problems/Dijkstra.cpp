#include <bits/stdc++.h>
#define pi pair<int, long long int>

using namespace std;
const int N = 1e5 + 5;
vector<pi> adjList[N];
int parent[N];
long long int dis[N];

class compare
{
public:
    bool operator()(pi l, pi r)
    {
        return l.second > r.second;
    }
};

void addEdge(int v1, int v2, int cost)
{
    adjList[v1].push_back({v2, cost});
    adjList[v2].push_back({v1, cost}); // Undirecetd Graph
}

void dijkstra(int src)
{
    priority_queue<pi, vector<pi>, compare> pq;
    pq.push({src, 0});
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();

        for (auto edge : adjList[par.first])
        {

            // Path Relaxation
            if (dis[par.first] + edge.second < dis[edge.first])
            {
                dis[edge.first] = dis[par.first] + edge.second;
                pq.push({edge.first, dis[edge.first]});
                parent[edge.first] = par.first;
            }
        }
    }
}
int main()
{
    int vertices, edges;
    cin >> vertices >> edges;

    while (edges--)
    {
        int v1, v2, cost;
        cin >> v1 >> v2 >> cost;
        addEdge(v1, v2, cost);
    }
    for (int i = 1; i <= vertices; i++)
    {
        dis[i] = INT64_MAX;
        parent[i] = -1;
    }
    dis[1] = 0;
    dijkstra(1);
    if (parent[vertices] != -1)
    {
        vector<int> v;
        while (vertices != -1)
        {
            v.push_back(vertices);
            vertices = parent[vertices];
        }
        reverse(v.begin(), v.end());
        for (int val : v)
        {
            cout << val << " ";
        }
    }
    else
        cout << -1 << endl;
}