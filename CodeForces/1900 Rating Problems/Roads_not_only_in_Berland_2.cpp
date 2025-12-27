// Just For Practice Not Correct

#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
vector<int> adjList[N];
vector<pair<int, int>> edgeList;
bool visit[N];
int parent[N];
int level[N];
int leader;

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

int dsu_union(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (leader1 == leader2)
        return 0;
    if (level[leader1] > level[leader2])
    {
        parent[leader2] = leader1;
        return leader1;
    }
    else if (level[leader2] > level[leader1])
    {
        parent[leader1] = leader2;
        return leader2;
    }
    else
    {
        parent[leader2] = leader1;
        level[leader1]++;
        return leader1;
    }
}

void dfs(int src)
{
    visit[src] = true;
    for (int child : adjList[src])
    {
        if (!visit[child])
        {
            dfs(child);
            leader = dsu_union(src, child);
            // edgeList.push_back({src, child});
        }
    }
}

void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
    {
        parent[i] = -1;
        level[i] = 0;
    }
}

void addEdge(int v1, int v2)
{
    adjList[v1].push_back(v2);
    adjList[v2].push_back(v1);
}

int main()
{
    int vertices;
    cin >> vertices;
    for (int i = 1; i < vertices; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        addEdge(v1, v2);
        // edgeList.push_back({v1, v2});
    }
    dsu_initialize(vertices);
    memset(visit, false, sizeof(visit));
    int counter = 0;
    int mainLeader;
    vector<int> v;
    for (int i = 1; i <= vertices; i++)
    {
        if (!visit[i])
        {
            counter++;
            if (counter > 1)
            {
                v.push_back(mainLeader);
                v.push_back(adjList[leader].back());
                adjList[leader].pop_back();
            }
            dfs(i);
            if (counter == 1)
                mainLeader = leader;
            if (counter > 1)
            {
                v.push_back(mainLeader);
                if (leader == mainLeader)
                {
                    v.push_back(i);
                    mainLeader = dsu_union(leader, i);
                    addEdge(mainLeader, i);
                    continue;
                }
                v.push_back(leader);
                mainLeader = dsu_union(mainLeader, leader);
                addEdge(mainLeader, leader);
            }
        }
    }
    cout << counter - 1 << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 4 == 0 && i != 0)
            cout << endl
                 << v[i] << " ";
        else
            cout << v[i] << " ";
    }
}
