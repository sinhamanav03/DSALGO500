#include<bits/stdc++.h>

#define MAX 2000005

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


// write code here
void rsolve(){
    ll n,k;
    cin>>n;
    ll a[3];
    a[0]=a[1]=a[2]=0;
    for(ll i=0;i<n;++i){
        cin>>k;
        a[k]++;
    }
    for(int i=0;i<3;++i){
        for(ll j=0;j<a[i];++j){
            cout<<i<<" ";
        }
    }
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
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif

    // FAST I/O
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();

    return 0;
}
