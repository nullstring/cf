#include <iostream>
#include <math.h>

using namespace std;
typedef long long INT;
typedef double FLOAT;

int main() {
    FLOAT n, m, x;
    cin >> n >> m >> x;
    
    cout << (INT) (ceil(n/x)*ceil(m/x));
    return 0;
}