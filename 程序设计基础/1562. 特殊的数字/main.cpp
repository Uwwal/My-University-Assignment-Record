#include <iostream>
using namespace std;
bool checkSpecial(int i, int n);      // 未定义，需要完成
 
int main() {
    int n;
    cin >> n;
    for (int i = 10000; i < 1000000; i ++) {
        if (checkSpecial(i, n)) {
            cout << i << endl;
        }
    }
    return 0;
}
 
#include <math.h>
bool checkSpecial(int i, int n) {
    int k = 0;
    int p = i;
    int c[7];
    int r ;
    if(i/100000>0){
        r = 6;
    }else{
        r = 5;
    }
    for (int j = r-1; j > -1; j--) {
        int s = (int)pow(10, j);
        k += p / s;
        c[j] = p/s;
        if (p>=s){
            p -= p/s*(int)pow(10, j);
        }
    }
    if(k!=n){
        return false;
    }
    for(int a = 0,b=r-1;a<b;a++,b--){
        if(c[a]!=c[b]){
            return false;
        }
    }
    return true;
}
