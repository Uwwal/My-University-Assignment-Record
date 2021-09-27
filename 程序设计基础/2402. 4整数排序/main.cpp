#include <iostream>
 
#define length 4
 
using namespace std;
 
void quickSort(int left, int right, int numArray[]);
 
int main() {
    int numArray[length];
 
    for(int i=0;i<length;i++){
        cin >> numArray[i];
    }
 
    quickSort(0, length-1, numArray);
 
    for(int i=0;i<length;i++){
        cout << numArray[i];
        if(i == length-1){
            cout << endl;
        }else{
            cout << " ";
        }
    }
 
    return 0;
}
 
void quickSort(int left, int right, int numArray[]) {
    if (left >= right) {
        return;
    }
 
    int n, m, anchor;
    n = left;
    m = right;
    anchor = numArray[left];
 
    while (n < m) {
        while (numArray[m] >= anchor && n < m) {
            m--;
        }
        while (numArray[n] <= anchor && n < m) {
            n++;
        }
        if (n < m) {
            int t = numArray[n];
            numArray[n] = numArray[m];
            numArray[m] = t;
        }
    }
    numArray[left] = numArray[n];
    numArray[n] = anchor;
    quickSort(left, n - 1, numArray);
    quickSort(n + 1, right, numArray);
}
