#include <iostream>
#include <math.h>

using namespace std;
typedef long long INT;
typedef double FLOAT;

int main() {
    INT n;
    cin >> n;
    //FLOAT an[105];
    
    FLOAT sum = 0;
    for (int i = 0; i < n; i++) {
        INT x;
        cin >> x;
        sum += x;
    }
    
    cout.precision(10);
    cout << sum/(n) << endl;
    return 0;
}