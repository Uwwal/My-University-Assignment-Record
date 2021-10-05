#include <iostream>

using namespace std;

void print_tem(int, int);
void print_column(int, int);

int main() {
    int i;
    cin >> i;

    int column = 1;

    print_tem(i,column);

    return 0;
}

void print_tem(int i, int column){
    print_column(column*2-1,i-column);
    if(column >= i){
        return;
    }
    print_tem(i,column+1);
    print_column(column*2-1,i-column);
}

void print_column(int star, int space){
    for(int i=0;i<space;i++){
        cout<<" ";
    }
    for (int i = 0; i < star; i++) {
        cout << '*';
    }
    cout<<endl;
}
