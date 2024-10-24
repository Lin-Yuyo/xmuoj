#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4 + 5;
const int INF = 0x3f3f3f3f;
typedef pair<int, int> pii;

vector<pii> G[MAXN];
int reward[MAXN], dist[MAXN], maxReward[MAXN];
bool vis[MAXN];

void addEdge(int u, int v, int w)
{
    G[u].push_back(make_pair(v, w));
}

void Dijkstra(int s, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
        maxReward[i] = 0;
        vis[i] = false;
    }
    priority_queue<pii, vector<pii>, greater<pii>> Q;
    dist[s] = 0;
    maxReward[s] = reward[s];
    Q.push(make_pair(dist[s], s));
    while (!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();
        if (vis[u])
            continue;
        vis[u] = true;
        for (auto &p : G[u])
        {
            int v = p.first, w = p.second;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                maxReward[v] = max(maxReward[u], reward[v]);
                Q.push(make_pair(dist[v], v));
            }
            else if (dist[u] + w == dist[v])
            {
                maxReward[v] = max(maxReward[v], max(maxReward[u], reward[v]));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, H;
    cin >> n >> m >> H;
    for (int i = 1; i <= n; i++)
        cin >> reward[i];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        addEdge(u, v, w);
        addEdge(v, u, w);
    }
    Dijkstra(1, n);
    if (dist[n] > H)
        cout << "AFK" << endl;
    else
        cout << maxReward[n] << endl;
    return 0;
}