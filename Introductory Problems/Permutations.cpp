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
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return;
    }
    int x = 1, j = (n + 1) / 2 + 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << x << " ";
            x++;
        }
        else
        {
            cout << j << " ";
            j++;
        }
    }
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