#include <cstdio>
#include <cmath>
 
#define pi 3.1415926
 
int main() {
    printf("%.5f", pow(sin(pi/4),2) + sin(pi/4)*cos(pi/4) - pow(cos(pi/4),2));
    return 0;
}
