#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
vector<int> adjList[N];
vector<pair<int, int>> edgeList;
int parent[N];
int dsuSize[N];

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union(int leader1, int leader2)
{
    if (dsuSize[leader1] < dsuSize[leader2])
    {
        swap(leader1, leader2);
    }
    parent[leader2] = leader1;
    dsuSize[leader1] += dsuSize[leader2];
}

void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
    {
        parent[i] = -1;
        dsuSize[i] = 1;
    }
}

int main()
{
    int vertices;
    cin >> vertices;
    dsu_initialize(vertices);
    queue<pair<int, int>> cyclePair;
    for (int i = 1; i < vertices; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        int leader1 = dsu_find(v1);
        int leader2 = dsu_find(v2);
        if (leader1 != leader2)
            dsu_union(leader1, leader2);
        else
            cyclePair.push({v1, v2});
    }
    vector<int> leaders;
    for (int i = 1; i <= vertices; i++)
    {
        if (parent[i] == -1)
            leaders.push_back(i);
    }
    if (leaders.size() > 1)
        cout << leaders.size() - 1 << endl;
    else
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i < leaders.size(); i++)
    {
        if (!cyclePair.empty())
        {
            // Close Old Road or Close Cycle Edge
            cout << cyclePair.front().first << " " << cyclePair.front().second << " ";
            // Build New Road or Connect Component
            cout << leaders[i - 1] << " " << leaders[i] << endl;
            cyclePair.pop();
        }
    }
}