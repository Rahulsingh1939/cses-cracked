#include <bits/stdc++.h>

#define ll long long
#define int long long
#define For(i, a, b) for(int i = (a);i < (b);i++)
#define in(a) for(auto& it:(a)) cin>>it;
#define out(b) for(auto& it:(b)) cout<<it<<" ";
#define vi vector<int>
#define vl vector<long long>
#define pb push_back
#define F first
#define S second
#define ld long double
#define pii pair<int,int>

const ll MOD = 1e9+7;
int n;

using namespace std;

void wise_crack()
{
    //Solution for given problem.
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

    vi team(n, 0); // 0: unassigned, 1: team1, 2: team2
    bool possible = true;
    function<void(int, int)> dfs = [&](int u, int c) {
        team[u] = c;
        for (int v : adj[u]) {
            if (team[v] == 0) {
                dfs(v, 3 - c);
            } else if (team[v] == c) {
                possible = false;
            }
        }
    };
    for (int i = 0; i < n; i++) {
        if (team[i] == 0) dfs(i, 1);
    }
    if (!possible) {
        cout << "IMPOSSIBLE\n";
    } else {
        for (int i = 0; i < n; i++) cout << team[i] << " ";
        cout << "\n";
    }
    return;
}
signed main()
{
    //Coder --> binary_Rahul
    //College --> NIT Raipur
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //For T number of test cases.
    int t=1;
    // cin>>t;
    while(t--){
        wise_crack();
    }
    return 0;
}