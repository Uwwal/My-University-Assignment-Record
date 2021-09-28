#include <iostream>
 
using namespace std;
 
int main() {
    char c, t;
    int i = 0, l;
    cin >> l; // 没用的输入
    cin.get(c); // 读个空格
    int worker_index;
    cin >> worker_index;
    cin.get(c); // 读个空格
    int work_num;
    cin >> work_num;
    cin.get(c); // 读个回车
 
    int k =0;
 
    while (cin.get(t)) {
        if (t != ' ' && t != '\n') {
            i *= 10;
            i += t - '0';
        } else {
            k++;
 
            switch (worker_index) {
                case 1:
                    cout << i+work_num <<endl;
                    break;
                case 2:
                    cout << i*work_num <<endl;
                    break;
                case 3:
                    if(i!=0){
                        cout<<i;
                    }
                    cout << work_num <<endl;
                    break;
                case 4:
                    int tem;
                    if(k%2==1){
                        tem = i%work_num;
                    }else{
                        tem = i;
                    }
                    cout << tem <<endl;
                    break;
                default:
                    break;
            }
            i = 0;
 
            if(t=='\n'){
                break;
            }
        }
    }
    return 0;
}
