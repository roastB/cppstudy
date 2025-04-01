// [3] string : 한글은 한글자에 3Byte라서 주의해주고 영어는 그냥 상식대로!
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "로스트비";
    cout << a[0] << "\n"; // a[0]의미 : a의 첫번째의 1byte를 찍어라 But!! 한글은 한글자에 3Byte이기때문에 에러가 뜬다!(�)
    cout << a[0] << a[1] << a[2] << "\n"; // [실행결과] : 로
    cout << a << "\n"; // [실행결과] : 로스트비
    
    string b = "roastB";
    cout << b[0] << "\n"; // [실행결과] : r
    cout << b << "\n"; // [실행결과] : roastB

    return 0;
}