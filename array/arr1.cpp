#include<iostream>
#include<string>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


void rsolve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size()/2;++i){
        swap(s[i],s[s.size()-1-i]);
    }
    cout<<s;
}

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