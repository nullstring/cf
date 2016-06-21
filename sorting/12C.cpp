#include <iostream>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <list>
#include <vector>
#include <list>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <limits>
#include <cstring>

using namespace std;

// ----- Types -----

// double precision: 14
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long L;
typedef vector<L> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef vector<double> VD;
typedef vector<VD> VVD;
const L INF = numeric_limits<L>::max() / 4;

/*
cout.precision(10);
*/

// ----- Controls -----
#define FORIT(a,b)   for (auto (a)=(b).begin(); (a)!=(b).end(); (a)++)
#define FOR(a,b,c)   for (int (a)=(b); (a)<(c); (a)++)
#define FORN(a,b,c)  for (int (a)=(b); (a)<=(c); (a)++)
#define FORD(a,b,c)  for (int (a)=(b); (a)>=(c); (a)--)
#define REP(i,n)     FOR(i,0,n)
#define REPN(i,n)    FORN(i,1,n)
#define REPD(i,n)    FORD(i,n,1)
 
#define RESET(a,b)   memset(a,b,sizeof(a)) 
#define SYNC         ios_base::sync_with_stdio(0);
#define SIZE(a)      (int)(a.size())
#define MIN(a,b)     (a) = min((a),(b))
#define MAX(a,b)     (a) = max((a),(b))
#define INPUT(in)    freopen(in,"r",stdin)
#define OUTPUT(out)  freopen(out,"w",stdout)
#define ALL(a)       a.begin(),a.end()
#define RALL(a)      a.rbegin(),a.rend()
#define SIZE(a)      (int)(a.size())
#define LEN(a)       (int)(a.length())
 
#define FIN(x)       freopen(x,"r",stdin)
#define FOUT(x)      freopen(x,"w",stdout)
#define FCLOSE       {fclose(stdin); fclose(stdout);}
 
#define F           first
#define S           second
#define PB           push_back
#define MP           make_pair

#define MX 105

int price[MX];
map<string, int> freq;

int main() {
    int n, m;
    cin >> n >> m;
    
    RESET(price, 0);
    REP(i, n) {
        cin >> price[i];
    }
    sort(price, price+n);
    
    REP(i, m) {
        string s;
        cin >> s;
        freq[s]++;
    }
    VI vec;
    for(auto p : freq) {
        vec.PB(p.second);
    }
    sort(RALL(vec));
    
    int i = 0;
    int minn = 0;
    int maxx = 0;
    for (auto v_i : vec) {
        minn += v_i*price[i];
        maxx += v_i*price[n-i-1];
        i++; 
    }
    cout << minn << " " << maxx << endl;
    
    return 0;
}