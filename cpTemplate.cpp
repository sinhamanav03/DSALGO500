#include <bits/stdc++.h>

#define fo(a,b) for(ll i =a;i <b ;++i)
#define foi(a,b,iter) for(iter i =a; i!=b;++i)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vcr vector<char>
#define mii map<int,int>
#define mll map<ll,ll>
#define it iterator
#define si set<int>
#define sll set<ll>
#define msll multiset<ll>
#define msull multiset<ull>

#define MAX 200005

// typedef uint64_t ull;
// typedef __uint128_t ull;


typedef long long ll; 
typedef unsigned long long ull; 

using namespace std;

vi digits(ll num){
    vi a;
    while(num!=0){
        a.pb(num%10);
        num=num/10;
    }
    return a;
}

ull binPower(ull b, ull e, ull m) {
    ull res = 1;
    b %= m;
    while (e) {
        if (e & 1)
            res = (ull)res * b % m;
        b = (ull)b * b % m;
        e >>= 1;
    }
    return res;
}

bool checkComposite(ull n, ull a, ull d, int s) {
    ull x = binPower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (ull)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}

bool isPrime(ull n) { // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    ull d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }
    int a[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (int i=0;i<12;++i) {
        if (n == a[i])
            return true;
        if (checkComposite(n, a[i], d, r))
            return false;
    }
    return true;
}

void rsolve(){
    ll n;
    ll t;
    ll k;
    cin>>n;
    fo(0,n){
        cin>>t;
    }
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

    rsolve();

    return 0;
}