#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    if((t%4==0 && t%100!=0) || (t%400==0)){
        cout << "YES";
    }else{
        cout << "NO";
    }
 
    return 0;
}
