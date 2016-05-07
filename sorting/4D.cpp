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

bool les(PII a, PII b) {
    return a.F < b.F && a.S < b.S;
}
void printArray(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
vector<pair<pair<int, int>, int> > v;
int res[5005];
int par[5005];
vector<int> final;
void output(int n) {
    if (!n) return;
    output(par[n]);
    cout << v[n].second << " ";
}

int main() {
    int n, cw, ch;
    cin >> n >> cw >> ch;
    
    v.PB(MP(MP(cw, ch), 0));
    FOR(i, 0, n) {
        int x, y;
        cin >> x >> y;
        if (les(MP(cw, ch), MP(x, y)))
            v.PB(MP(MP(x, y), i+1));
    }
    
    sort(ALL(v));
    RESET(res, 0);
    RESET(par, -1);
    
    FOR(i, 0, v.size()) {
        FOR(j, 0, i) {
            //cout << "i: " << i << " j: " << j << endl;
            //cout << "res[j]+1: " << res[j]+1 << " res[i]: " << res[i] << endl;
            if (les(v[j].first, v[i].first) && res[j]+1 > res[i]) {
                res[i] = res[j]+1;
                par[i] = j;
                //cout << i << " -> " << j << endl;
            }     
        }
    }
    
    //printArray(res, n+1);
    //printArray(par, n+1);
    
    int loc = 0;
    FOR(i, 0, v.size()) {
        if (res[loc] < res[i]) loc = i;
    }
    
    //output(loc);
    
    cout << res[loc] << endl;
    
    if (res[loc] == 0) return 0;
    output(loc);
    
    cout << endl;
    
    return 0;
}