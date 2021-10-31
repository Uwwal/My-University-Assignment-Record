#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
 
using namespace std;
 
void rotate(vector<vector<int> > &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < (n + 1) / 2; j++) {
            int t = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = t;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
 
    vector<vector<int> > matrix;
    for (int i = 0; i < t; i++) {
        vector<int> element;
        for (int j = 0; j < t; j++) {
            int a;
            cin >> a;
            element.push_back(a);
        }
        matrix.push_back(element);
    }
    rotate(matrix);
 
    for (int m =0; m < t; m++) {
        for (int n = 0; n <t; n++) {
            cout << matrix[m][n] <<" ";
        }
        cout << endl;
    }
}
