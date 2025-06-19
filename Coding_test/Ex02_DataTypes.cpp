#include <bits/stdc++.h>

using namespace std;

int main(){
    //int
    int i;  
    i =123;

    cout << i << " " << sizeof(i) << endl;
    cout << sizeof(int) << endl;
    cout << 123 + 4 << " " << sizeof(123+4) << endl;

    //float, double
    float f = 123.456f; 
    double d = 123.456; 
    cout << f << " " << sizeof(f) << endl;
    cout << d << " " << sizeof(d) << endl;

    //char, char str[]
    char c = 'a';
    char str[] = "Hello, World!"; // <-> std::string

    cout << c << " " << sizeof(c) << endl;

    //type conversion
    i = 987.654;
    cout << "int from double " << i << endl;

    f = 567.89;
    cout << "float from double " << f << endl;

    //basic operations
    i += 100;   //i = i +100
    i++;        //i = i + 1
    cout << i << endl;

    //bool
    bool is_good = true;
    is_good = false;

    cout << is_good << endl;

    is_good = true;
    cout << is_good << endl;

    cout << boolalpha << is_good << endl;
    cout << noboolalpha << is_good << endl;

    //comparison
    cout << boolalpha;
    cout << (true && true) << endl;
    cout << (true || false) << endl;

    //logical operations
    cout << (1>3) << endl;
    cout << (3==3) << endl;
    cout << (i>=3) << endl;
    cout << ('a' != 'c') << endl;
    cout << ('a' == 'c') << endl;

    // scope
    i = 123;
    {
        i = 345;        // i = 123와 같은 i를 사용 중
        //int i = 345;  // 주석 해제 시: i = 123과는 다른, 블록 내의 새 지역 변수
        cout << i << endl;
    }
    cout << i << endl;



    return 0;
}