#include <iostream>
using namespace std;

struct Node{
    int x, y;
} a, b;

Node mean(Node _a,Node _b){
    return Node{(_a.x+_b.x)/2,(_a.y+_b.y)/2};
}

int main() {

    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    Node c = mean(a,b);
    cout<< c.x << " "<<c.y << endl;
    return 0;
}
