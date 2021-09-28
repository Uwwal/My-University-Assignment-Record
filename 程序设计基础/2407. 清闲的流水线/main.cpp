#include <iostream>
 
using namespace std;
 
int main() {
    char c, t;
    int i = 0, j = 0, l;
    bool first_print = true;
    cin >> l; // 没用的输入
    cin.get(c); // 读个回车
 
    while (cin.get(t)) {
        if (t != ' ' && t != '\n') {
            i *= 10;
            i += t - '0';
 
        } else {
            if (!first_print) {
                cout << ' ';
            }
            first_print = false;
            // 空格的问题?
 
            if (i % 2 == 1) {
                j += i - (i % 3);
                cout << i % 3;
            } else {
                cout << i;
            }
            if (t == '\n') {
                break;
            }
            i = 0;
        }
    }
    cout << '\n' << j;
 
    return 0;
}
