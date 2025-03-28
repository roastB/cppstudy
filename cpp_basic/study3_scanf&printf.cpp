//[핵심]
//cin vs scanf / cout vs printf: 형식 지정 유무 차이
//cin vs getline : 개행문자 포함 차이
#include <bits/stdc++.h>
using namespace std;

int a;
double b;
char c;
string s;

int main(){
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
    return 0;
}