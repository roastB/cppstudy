#include <bits/stdc++.h>
using namespace std;

int a;
double b;
char c;
string s;

int main(){
    scanf("%d %lf %c", &a, &b, &c);
    
    getchar(); // 개행 문자 제거
    getline(cin, s);

    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
    printf("%s\n", s.c_str()); //.c_str()을 사용해야 정상작동!

    return 0;
}