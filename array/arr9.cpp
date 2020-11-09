#include <bits/stdc++.h>

#define MAX 200005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int getMinDiff(ll *a, ll n, ll k)
{
    ll max = 0;
    ll min = 100000;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    for (ll i = 0; i < n; ++i)
    {
        if(a[i]==min){
            a[i] += k;
            min = a[i];
        }else if(a[i]==max){
            a[i] -= k;
            max = a[i];
        }else if(a[i]<max-k){
            a[i] + k;
        }else{
            a[i] - k;
        }
    }
    max = 0;
    min = 100000;
    for (ll i = 0; i < n; ++i)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    return (max - min);
}

// write code here
void rsolve()
{
    ll n, k;
    cin >> k >> n;
    ll a[100000];
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << getMinDiff(a, n, k);
}

// function to handle test cases
// void solve()
// {
//     ll t;
//     cin >> t;
//     // for (ll casenum = 1; casenum <= t; ++casenum)
//     // {
//     //     rsolve();
//     //     cout << "\n";
//     // }
// }

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

    rsolve();

    return 0;
}
