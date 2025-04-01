// [2-2] char을 초기화 할때 주의할 점
#include <bits/stdc++.h>
using namespace std;

int main(){
    char a = '\0'; //ASCII 값이 0 : 널문자 초기화
    char b = 0;
    char c = NULL;
    string d = "";

    cout << "cout 결과는..?! : ";
    if(a==b) cout << "@";
    if(b==c) cout << "#";
    if(string(1,a) == d) cout << "$"; //string(1, '\0')는 길이가 1이고 "\0"을 포함하고 반면 d는 길이가 0인 빈 문자열. 그래서 출력안함!

    return 0;

}