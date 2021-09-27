#include <iostream>
#include <cstdio>
#include <string>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a;
    cin >> b;
    char t[4];
    sprintf(t, "%d", a);
    if (t[1] == char(b+48)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
