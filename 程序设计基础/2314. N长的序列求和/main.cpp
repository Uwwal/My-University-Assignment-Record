#include <iostream>
#include <stdio.h>
 
using namespace std;
 
 
int main() {
 
    int t = 0;
 
    int s = 0;
 
    int j = 0;
 
    scanf("%d", &j);
    for (int k = 0; k < j; k++) {
        int i = 0;
        scanf("%d", &i);
 
        if ((i % 3 == 0 || i % 5 == 0) && i < 1000) {
            s += i;
            t++;
        }
 
        if (i == -1) {
            break;
        }
 
        if (t == 10) {
            break;
        }
    }
    cout << s;
}
