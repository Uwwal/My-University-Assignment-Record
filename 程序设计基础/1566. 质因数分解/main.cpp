#include <iostream>
#include <cmath>
using namespace std;
void printPrime(int num);    // 未定义，需要完成

int main() {
    int n, i;
    cin >> n;
    for(int p=1;p<=n;p++) {
        cin >> i;
        printPrime(i);
    }
    return 0;
}

void printPrime(int num){
    int i = 2;
    bool t = false;
    cout << num << "=";
    do {
        if(num%i==0){
            num/=i;
            if (!t){
                t=!t;
            }else{
                cout << "*";
            }
            cout << i;
        }else{
            i++;
        }
    } while (num!=1);
    cout << "\n";
}
