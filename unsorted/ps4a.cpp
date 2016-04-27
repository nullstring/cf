#include <iostream>
#include <math.h>

using namespace std;
typedef long long INT;
typedef double FLOAT;

int main() {
    INT w;
    
    cin >> w;
    
    if (w < 3) {
        cout << "NO" << endl;
    } else if (w%2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}