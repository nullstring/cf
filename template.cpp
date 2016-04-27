#include <iostream>
#include <set>
#include <string>
#include <map>
#include <stack>
#include <list>
#include <vector>
#include <list>
#include <math.h>

using namespace std;

// ----- Types -----

// double precision: 14
typedef vector<INT> VI;
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
#define FOR(i, n) for (int i = 0; i < n; i++)

// ----- Data Structures -----
//  Static arrays - int arr[10]
//  Dynamic arrays - vector<int>
//  Linked lists - list<int>

//  Stacks - stack<int>
//    - FIFO
//    - Simulate recusion
//    - DFS
//    - Reverse sequence
//    - Matching brackets
//
//  Queues - queue<int>
//    - FILO
//    - BFS
//
//  Priority Queues - priority_queue<int>
//    - Process events in priority
//    - Shortest path in graph
//    - Some greedy algos
//
//  Sets - set<int>
//    - Distinct items
//    - Check inclusion
//    - Check repetition
//
//  Maps - map<int, int>
//    - Frequency table
//    - DP
//
//  Set where size < 64: use long long
//     - xor for insertion and inclusion checking 
//     - Empty set: 0
//     - Single element set: 1<<i
//     - The universe set (i.e. all elements): (1<<n)-1
//     - Union of sets: x|y
//     - Intersection of sets: x&y
//     - Complement of a set: ~x & ((1<<n)-1)
//     - Inclusion (i belongs to x ?): (x & (1<<i))
//
//  Graph
//     - Adjecency list: vector<int> adj[MAX_NODES];
//     - Adjecency matric: int adj[MAX_NODES][MAX_NODES];
//     - Edge list: vector<pair<int, int>> edges;

// ----- Container operations -----
// Sorting an array - sort(arr.begin(), arr.end())
// Search unsorted array - find(arr.begin(), arr.end(), x)
// Search sorted array - lower_bound(arr.begin(), arr.end(), x)

int main() {
    return 0;
}