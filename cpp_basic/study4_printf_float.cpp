// printf의 실수 타입 출력
#include <bits/stdc++.h>
using namespace std;
typedef double db;

db a = 1.23456789;
int b = 12;
int c = 2;

int main(){
    printf("%.6lf\n", a);
    printf("%02d\n", b);
    printf("%02d\n", c);

    return 0;
}