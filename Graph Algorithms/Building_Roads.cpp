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
    vector<bool> vis(n, false);
    vector<int> res_nodes;
    // Find connected components
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            res_nodes.pb(i);
            queue<int> q;
            q.push(i);
            vis[i] = true;
            while (!q.empty())
            {
                int u = q.front();
                q.pop();
                for (int v : adj[u])
                {
                    if (!vis[v])
                    {
                        vis[v] = true;
                        q.push(v);
                    }
                }
            }
        }
    }
    int res = res_nodes.size() - 1;
    cout << res << "\n";
    for (int i = 1; i < res_nodes.size(); i++)
    {
        cout << res_nodes[i - 1] + 1 << " " << res_nodes[i] + 1 << "\n";
    }
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