#include <bits/stdc++.h>

#define MAX 200005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int findDuplicate(vector<int>& a){
    map<int, int> fr;
    for (int i = 0; i < a.size();++i){
        fr[a[i]]++;
        if(fr[a[i]]>1)
            return a[i];
    }
}

// write code here
void rsolve()
{
    ll n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;++i){
        cin >> a[i];
    }
    cout<<findDuplicate(a);
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
