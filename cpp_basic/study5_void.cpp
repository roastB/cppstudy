// C++은 엄격한 타입시스템 언어
// 대표적으로 [void, char, string, bool, int, long long, double, unsigned long long]

// [1] void : 리턴하는 값이 없다.
#include <bits/stdc++.h>
using namespace std;

int ret = 1;

void a(){
    ret = 2;
    cout << ret << "\n";
    return;
}
int main(){
    a();
    return 0;
}