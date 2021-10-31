#include <stack>
#include <iostream>
using namespace std;
 
int main()
{
    stack<char> tem;
    char t;
 
    while(cin.get(t)){
        if ((t>='A'&&t<='Z')||(t>='a'&&t<='z')){
            tem.push(t);
        }else{
            while(!tem.empty()){
                cout << tem.top();
                tem.pop();
            }
            cout<<t;
        }
    }
 
    return 0;
}
