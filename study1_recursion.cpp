//[필수개념] 재귀함수(recursion)
// 큰돌의 C++ 공부법: 교안을 바탕으로 "타이핑 → 이해 → 일정 부분 암기"

#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if( n==1 || n==0 ) return 1;
    return n*fact(n-1);
}

int fibo(int n){
    if( n==0 || n==1 ) return n;
    return fibo(n-1) + fibo(n-2);
}

int n = 5;
int main() {
    cout << fact(n) << " " << fibo(n) << "\n";
    return 0;
}

