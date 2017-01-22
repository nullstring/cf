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
typedef vector<long long> VI;
typedef vector<VI> VVI;
typedef long long L;
typedef vector<L> VL;
typedef vector<VL> VVL;
typedef pair<long long, long long> PII;
typedef vector<PII> VPII;
typedef vector<double> VD;
typedef vector<VD> VVD;
const L INF = numeric_limits<L>::max() / 4;

/*
cout.precision(10);
*/

// ----- Controls -----
#define FORIT(a,b)   for (__typeof((b).begin()) (a)=(b).begin(); (a)!=(b).end(); (a)++)
#define FOR(a,b,c)   for (long long (a)=(b); (a)<(c); (a)++)
#define FORN(a,b,c)  for (long long (a)=(b); (a)<=(c); (a)++)
#define FORD(a,b,c)  for (long long (a)=(b); (a)>=(c); (a)--)
#define REP(i,n)     FOR(i,0,n)
#define REPN(i,n)    FORN(i,1,n)
#define REPD(i,n)    FORD(i,n,1)
 
#define RESET(a,b)   memset(a,b,sizeof(a)) 
#define SYNC         ios_base::sync_with_stdio(0);
#define SIZE(a)      (long long)(a.size())
#define MIN(a,b)     (a) = min((a),(b))
#define MAX(a,b)     (a) = max((a),(b))
#define INPUT(in)    freopen(in,"r",stdin)
#define OUTPUT(out)  freopen(out,"w",stdout)
#define ALL(a)       a.begin(),a.end()
#define RALL(a)      a.rbegin(),a.rend()
#define SIZE(a)      (long long)(a.size())
#define LEN(a)       (long long)(a.length())
 
#define FIN(x)       freopen(x,"r",stdin)
#define FOUT(x)      freopen(x,"w",stdout)
#define FCLOSE       {fclose(stdin); fclose(stdout);}
 
#define F           first
#define S           second
#define PB           push_back
#define MP           make_pair

typedef pair<long long, long long> p;

p ab[4001];
vector<long long> all;

int main() {
    long long n;
    cin >> n;
    
    FOR(i, 0, n) {
        long long a, b;
        cin >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        ab[i].first = a;
        ab[i].second = b;
        all.push_back(a);
        all.push_back(b);
    }
    
    long long ans=0, height, width;
    
    //sort(ab, ab+n);
    
    FOR(i, 0, n) {
        long long h = ab[i].first;
        
        vector<long long> ws;
        FOR(j, 0, n) {
            if (ab[j].first >= ab[i].first) {
                ws.push_back(ab[j].second);
            }   
        }
        sort(ALL(ws));
        
        FOR(j, 0, ws.size()) {
            long long l = ws.size() - j;
            long long w = ws[j];
            if (w*h*l > ans) {
                ans = w*h*l;
                height = h;
                width = w;
            }
        }
    }
    
    cout << ans << endl;
    cout << height << " " << width << endl;
    
    return 0;
}