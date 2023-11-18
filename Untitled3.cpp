#include <iostream>
#include <vector>
using namespace std;

#define toStr(x) #x
#define io(v) cin >> v
#define INF 100000000
#define foreach(v, i) for (int i = 0; i < v.size(); i++)
#define FUNCTION(name, op) void name(int &a, int b) { if (b op a) a = b; }

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main()
{
    int n;
    io(n);
    vector<int> v(n);
    foreach(v, i)
    {
        io(v[i]);
    }

    int mn = INF;
    int mx = -INF;
    foreach(v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }

    int ans = mx - mn;
    cout << toStr(Result =) << ' ' << ans;
    return 0;
}

