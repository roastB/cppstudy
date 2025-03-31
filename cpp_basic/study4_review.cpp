/*[Chatgpt 예제]
사용자로부터 이름과 나이를 입력받아 출력하는 프로그램을 작성하되,
- #define을 이용해 버퍼 크기를 정의하고,
- typedef를 사용해 unsigned int 타입의 별칭을 만든다.
- getline()과 cin을 활용해 문자열을 입력받고,
- scanf()와 printf()를 활용해 정수를 입력받고 출력한다.*/

#include <bits/stdc++.h>
using namespace std;

#define BUFFER_SIZE 100
typedef unsigned int uint;
typedef string str;

str name;
uint age;

int main(){
    cout << "이름을 입력해주세요 : ";
    getline(cin, name);

    printf("나이를 입력해주세요 : ");
    scanf("%u", &age);
    cin.ignore(); // [개선점1] scanf 후 개행 문자 제거 (만약 scanf를 먼저 실행했다면 필요)

    cout << "입력한 이름은 " << name << "\n";
    //printf("입력한 나이는 %u", age);
    cout << "입력한 나이는 " << age << "\n"; // [개선점2] cout과 printf은 하나로 통일해서 사용!

    return 0;
}