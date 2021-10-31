#include <iostream>
 
using namespace std;
 
void foo(int*, int, int);
int main() {
    int len;
    cin >> len;
 
    int *a = new int[len];
 
    for (int i = 1; i <= len; i++) {
        int b;
        cin >> b;
        a[i - 1] = b;
        cout << "Insert element[" << i << "]:" << endl;
 
        cout << "  Init:";
        for (int j = 0; j < i; ++j) {
            cout << a[j]<<" ";
        }
        cout << endl;
 
        int k = i - 1;
        foo(a, k, k);
 
        cout << "  Final:";
        for (int j = 0; j < i; ++j) {
            cout << a[j]<<" ";
        }
 
        if (i!=len){cout << endl;}
    }
 
    delete []a;
 
    return 0;
}
 
int bar(int*a, int k, int t,int c) {
    if(t==0){
        return 0;
    }
    if (k != 0 && a[t - 1] > c) {
        cout << "  Move back:";
        a[t] = a[t - 1];
        for (int j = 0; j <= k; ++j) {
            cout << a[j]<<" ";
        }
        cout << endl;
        return bar(a, k, t - 1,c);
    }
    return t;
}
 
void foo(int*a, int k, int t) {
    int c = a[k];
    a[bar(a, k, t,c)] = c;
}
