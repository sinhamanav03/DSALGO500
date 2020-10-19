#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

class solution{
    public:
    int middle(int A,int B,int C){
        return (A>B)?(B>C)?B:(A>C)?C:A:(A>C)?A:(B>C)?C:B;
    }
};

// write code here
void rsolve(){
    solution ob;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<ob.middle(a,b,c);
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
