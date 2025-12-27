#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 1;
vector<pair<int, int>> adjList[N];
pair<int, int> dis[N];

class compare
{
public:
    bool operator()(pair<int, int> l, pair<int, int> r)
    {
        return l.second > r.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
    pq.push({src, 0});
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();

        for (auto edge : adjList[par.first])
        {
            // Path Relaxation
            if (dis[par.first].first + edge.second < dis[edge.first].first)
            {
                dis[edge.first].first = dis[par.first].first + edge.second;
                pq.push({edge.first, dis[edge.first].first});
                dis[edge.first].second = par.first;
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
        adjList[v1].push_back({v2, cost});
        adjList[v2].push_back({v1, cost}); // Undirecetd Graph
    }
    for (int i = 1; i <= vertices; i++)
    {
        dis[i].first = INT_MAX;
        dis[i].second = -1;
    }
    dis[1].first = 0;
    dijkstra(1);
    if (dis[vertices].second != -1)
    {
        vector<int> v;
        while (vertices != -1)
        {
            v.push_back(vertices);
            vertices = dis[vertices].second;
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