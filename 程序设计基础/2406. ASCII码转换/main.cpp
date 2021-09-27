#include <iostream>
 
using namespace std;
 
int main() {
    int m, n, k;
 
    cin >> m;
    cin >> n;
    cin >> k;
 
    for (int t = 1; m < n; m++) {
        cout << char(m);
        if (t == k) {
            cout << "\n";
            t = 1;
        } else {
            t++;
        }
    }
 
    return 0;
}
