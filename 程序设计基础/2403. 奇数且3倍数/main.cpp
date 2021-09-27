#include <iostream>
#include <cstdio>
 
#define length 6
 
using namespace std;
 
int main() {
    double r = 0.0;
    int count = 0;
 
    for (int i = 0; i < length; i++) {
        int t;
        cin >> t;
        if (t % 3 == 0 && t % 2 == 1) {
            count++;
            r += double(t);
        }
    }
    if(count==0){
        printf("0.0000");
    }else {
        printf("%.4f", r / count);
    }
    return 0;
}
