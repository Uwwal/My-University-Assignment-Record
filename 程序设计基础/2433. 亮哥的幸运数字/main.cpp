#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    char r[32]={'0','0','0','0','0','0'};
 
    for(int i=0;t>0;t/=2,i++){
        r[i]=char(t%2+48);
    }
 
    cout << r[0] << r[1] <<r[2]<< r[3] << r[4] <<r[5];
 
    return 0;
}
