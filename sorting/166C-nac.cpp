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
#define FORIT(a,b)   for (__typeof((b).begin()) (a)=(b).begin(); (a)!=(b).end(); (a)++)
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

int main() {
    int n, x;
    int v[505];
    
    cin >> n >> x;
    FOR(i, 0, n) {
        cin >> v[i];
    }
    
    bool has = false;
    FOR(i, 0, n) {
        if (v[i] == x) has = true;
    }
    int ans = 0;
    if (!has) {
        v[n++] = x;
        ans++;
    }
    //cout << ans << endl;
    sort(v, v+n);
    int num_l = 0, num_g = 0, num_e = 0;
    FOR(i, 0, n) {
        if (v[i] < x) num_l++;
        if (v[i] > x) num_g++;
        if (v[i] == x) num_e++;
    }
    
    int diff = abs(num_g - num_l);
    ans += diff;
    ans += 1-num_e;
    
    if ((n+!has+ans)%2 == 0) ans--;
    cout << ans << endl;
    
    return 0;
}