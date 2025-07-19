#include <bits/stdc++.h>

#define ll long long
#define int long long
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define in(a)            \
    for (auto &it : (a)) \
        cin >> it;
#define out(b)           \
    for (auto &it : (b)) \
        cout << it << " ";
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define F first
#define S second
#define ld long double
#define pii pair<int, int>

const ll MOD = 1e9 + 7;
int n;

using namespace std;

void wise_crack()
{
    // Solution for given problem.
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    For(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<int> dist(n, -1);
    vector<int> parent(n, -1);
    queue<int> q;
    dist[0] = 0;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto &it : adj[node])
        {
            if (dist[it] == -1)
            {
                dist[it] = dist[node] + 1;
                parent[it] = node;
                q.push(it);
            }
        }
    }
    if (dist[n - 1] == -1)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    // Reconstruct path
    vector<int> path;
    int cur = n - 1;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for (int v : path)
        cout << v + 1 << " ";
    cout << endl;
    return;
}
signed main()
{
    // Coder --> binary_Rahul
    // College --> NIT Raipur
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // For T number of test cases.
    int t = 1;
    // cin>>t;
    while (t--)
    {
        wise_crack();
    }
    return 0;
}