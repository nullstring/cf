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
#define PB          push_back
#define MP          make_pair

L value(L n, L m, L k, L x, L y) {
    L t = (2*n - 2)*m;
    L iter = k/t;
    L rem = k%t;
    L rem_m = rem/m;
    L rem_n = rem%m;

    L ans = iter;

    // 1st and last row counted just once per iteration.
    if (x != 1 && x != n) {
        ans += iter;
    }

    L actual_count = m*x + y;
    if (actual_count >= rem) {
        ans += 1;

        L rev_actual = (n-x)*m + y;
        L rev_k = rem - n*m;

        if (rev_k - rev_actual >= 0) {
            ans += 1;
        }
    }
    return ans;
}


int main() {

    L n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;


    cout << value(n, m, k, x, y) << " ";
    cout << max(value(n, m, k, 1, 1), max(value(n, m, k, 2, 1), value(n, m, k, n-1, 1))) << " ";
    cout << value(n, m, k, n, m) << endl;
    return 0;
}