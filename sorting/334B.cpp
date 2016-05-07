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
    int a[8][2];
    FOR (i, 0, 8) {
        cin >> a[i][0] >> a[i][1];
    }
    pair<int, int>* ap = (pair<int, int>*) a;
    sort(ap, ap+8);
    
    bool t = true;
    if (a[0][0] != a[1][0]) t = false;
    if (a[0][0] != a[2][0]) t = false;
    if (a[1][0] != a[2][0]) t = false;
    if (a[3][0] != a[3][0]) t = false;
    if (a[5][0] != a[6][0]) t = false;
    if (a[5][0] != a[7][0]) t = false;
    if (a[6][0] != a[7][0]) t = false;
    
    if (a[0][0] == a[3][0]) t = false;
    if (a[0][0] == a[5][0]) t = false;
    if (a[3][0] == a[5][0]) t = false;
    
    if (a[0][1] == a[1][1]) t = false;
    if (a[1][1] == a[2][1]) t = false;
    if (a[0][1] == a[2][1]) t = false;
    
    if (a[0][1] != a[3][1]) t = false;
    if (a[0][1] != a[5][1]) t = false;
    if (a[3][1] != a[5][1]) t = false;
    if (a[1][1] != a[6][1]) t = false;
    if (a[2][1] != a[4][1]) t = false;
    if (a[2][1] != a[7][1]) t = false;
    if (a[4][1] != a[7][1]) t = false;
    
    if (t) {
        cout << "respectable" << endl;
    } else {
        cout << "ugly" << endl;
    }
    
    return 0;
}