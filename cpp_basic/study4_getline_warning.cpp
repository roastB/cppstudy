/*[중요] getline으로 입력받을 때 주의할 점!
: cin >> 입력하고 엔터(↵) 키를 누르면 버퍼에 \n(개행문자)이 남게된다. 이때
getline(cin, ~);이 실행되면 버퍼에 남아 있던 \n을 읽어서 name에 
빈 문자열이 들어가기 때문에 실행결과가 이상해진다!*/

#include <bits/stdc++.h>
using namespace std;
typedef string str;

int T;
str s;
str bufferflush;

int main(){
    cout << "반복할 횟수를 입력 : ";
    cin >> T;
    //cin.ignore(); // 그래서 "cin >>" 다음에 "getline(cin, ~)"를 바로 쓴다면 cin.ignore();를 통해서 남아있는 \n(개행문자)를 제거해야함!  

    cout << "bufferflush를 입력 : ";
    getline(cin, bufferflush);
    //cin.ignore();

    for (int x = 0 ; x < T ; x++){
        getline(cin, s);
        cout << s << "\n";
    }

    return 0;
}
// [결론] 즉, 버퍼를 잘 관리하지 않으면 입력이 꼬이거나 예상치 못한 동작이 발생할 수 있다!
// CF. 버퍼는 데이터가 임시로 저장되는 메모리 공간이다.