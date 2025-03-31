#include <bits/stdc++.h>
using namespace std;
typedef string str;

str answers;

int main(){
    cout <<"정답을 입력하세요 ('!'로 구분, 종료 시 Enter): " << "\n";
    getline(cin, answers, '!');
    cout << answers << "\n";

    return 0;
}