#include <bits/stdc++.h>

#define MAX 200005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int minJumps(int a[], int n)
{
    int maxJump = a[0], jump = 1, steps = a[0];
    if (n <= 1)
        return 0;
    else if (a[0] == 0)
        return -1;

    for (int i = 1; i < n; ++i)
    {
        if (i == n - 1)
            return jump;
        maxJump = max(maxJump, i + a[i]);
        steps--;
        if (steps == 0)
        {
            jump++;
            if (i >= maxJump)
                return -1;
            steps = maxJump - i;
        }
    }
    return jump;
}

// write code here
void rsolve()
{
    ll n, k = 0, c = 0;
    cin >> n;
    int a[MAX];
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << minJumps(a, n);
}

// function to handle test cases
void solve()
{
    int t;
    cin >> t;
    for (int casenum = 1; casenum <= t; ++casenum)
    {
        rsolve();
        cout << "\n";
    }
}

int main()
{

// I/0 REDIRECTION For local setup
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // FAST I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
