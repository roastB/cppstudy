// 나만의 예제 : #define, typedef, printf, getline
#include <bits/stdc++.h>
using namespace std;

#define loop(x, n) for(int x = 1 ; x <= n ; x++)
typedef string str;
str write_answer;

int main(){
    printf("정답을 1문장을으로 작성해 주세요. \n");
    getline(cin, write_answer);

    if (write_answer == "C++ Studying"){
        printf("정답입니다! : %s\n", write_answer.c_str());
    }
        
    else{
        loop(x, 3){
            printf("복습만이 살길이다!\n");
        }
    }

    return 0;
}