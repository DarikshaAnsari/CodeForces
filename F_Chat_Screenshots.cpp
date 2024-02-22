#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
typedef unordered_map<ll, ll> mpp;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(index, start, end) for (int index = start; index < end; index++)
#define MAX_NODES 200001

vector<int> adjacencyList[MAX_NODES];
int visited[MAX_NODES];
int dfsVisited[MAX_NODES];

bool hasCycle(int node)
{
    visited[node] = 1;
    dfsVisited[node] = 1;
    for (auto neighbor : adjacencyList[node])
    {
        if (!visited[neighbor] && hasCycle(neighbor))
        {
            return true;
        }
        else if (dfsVisited[neighbor])
        {
            return true;
        }
    }
    dfsVisited[node] = 0;
    return false;
}

void checkWushangClan()
{
    int numNodes, numEdges;
    cin >> numNodes >> numEdges;
    fr(i, 0, numNodes + 1)
    {
        adjacencyList[i].clear();
    }
    fr(i, 0, numEdges)
    {
        vi nodes(numNodes);
        for (auto &node : nodes)
            cin >> node;
        fr(j, 2, numNodes)
        {
            adjacencyList[nodes[j - 1]].push_back(nodes[j]);
        }
    }
    fr(i, 0, numNodes + 1)
    {
        visited[i] = 0;
        dfsVisited[i] = 0;
    }
    fr(i, 1, numNodes + 1)
    {
        if (visited[i] == 0 && hasCycle(i))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int numTestCases;
    cin >> numTestCases;
    while (numTestCases--)
    {
        checkWushangClan();
    }
    return 0;
}
