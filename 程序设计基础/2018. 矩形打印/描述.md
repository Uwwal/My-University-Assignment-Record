#include <iostream>

using namespace std;


int main() {
    int c;
    cin >> c;

    int r;
    cin >> r;

    string column_side,column_centre;

    for(int i=0;i<r;i++){
        column_side.append("*");
        if(i==0 || i==r-1){
            column_centre.append("*");
        }else{
            column_centre.append(" ");
        }
    }
    for (int j = 0;j<c;j++) {
        if(j==0){
            cout<<column_side<<endl;
            continue;
        }
        if (j==c-1){
            cout<<column_side;
            break;
        }
        cout<<column_centre<<endl;
    }
}
