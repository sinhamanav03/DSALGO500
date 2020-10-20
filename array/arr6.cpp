#include<bits/stdc++.h>

#define MAX 200005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


// write code here
void rsolve(){
    ll n,m,k;
    cin>>n>>m;
    vector<int> a(n),b(m);
    unordered_set<int> s;
    for(int i=0;i<n;++i){
        cin>>a[i];
        s.insert(a[i]);
    }
    for(int i=0;i<m;++i){
        cin>>b[i];
        s.insert(b[i]);
    }
    cout<<s.size();
}


// function to handle test cases
void solve(){
    int t;
    cin>>t;
    for(int casenum=1;casenum<=t;++casenum){
        rsolve();
        cout<<"\n";
    }

}


int main(){

    // I/0 REDIRECTION For local setup
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin) ;
    freopen("../output.txt", "w", stdout) ;
    #endif

    // FAST I/O
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();

    return 0;
}
