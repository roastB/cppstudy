// cout의 실수 타입 출력 ( <<fixed << setprecision(자릿수) : 그러면 반올림하여 표현 )
#include <bits/stdc++.h>
using namespace std;
typedef double db;

db num = 0.123456789;

int main(){
    cout << num << "\n";
    cout << fixed << setprecision(4) << num << "\n";
    cout << fixed << setprecision(8) << num << "\n";
    return 0;
}