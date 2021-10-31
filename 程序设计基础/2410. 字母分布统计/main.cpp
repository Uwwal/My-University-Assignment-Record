#include <iostream>
#include <map>
#include <cstdio>
 
using namespace std;
 
int main() {
    char t;
    map<char, int> k;
    while (cin.get(t) && t != '\n') {
        if (isalpha(t)) {
            if (t >= 'A' && t <= 'Z') { t = (char) tolower(t); }
            if (k.find(t) == k.end()) {
                k.insert(pair<char, int>(t, 1));
            } else {
                k[t] = k[t] + 1;
            }
        }
    }
 
    int sum = 0;
    for (map<char, int>::iterator j = k.begin(); j != k.end(); j++) {
        sum += j->second;
    }
 
    for (char i = 'a'; i <= 'z'; i++) {
            printf("%c %.2f%%\n",i,((double)k[i])/sum*100);
    }
    return 0;
}
