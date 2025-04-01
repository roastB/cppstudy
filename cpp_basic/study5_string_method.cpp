// String에서 많이 사용하는 메서드(method : class 내부에서 정의된 함수)를 사용한 코드
#include <bits/stdc++.h>
using namespace std;
typedef string str;

int main(){
    str a = "love is";
    a += " pain!";
    // 1️⃣ pop_back()
    a.pop_back();
    cout << a << " : " << a.size() << "\n";
    cout << char(* a.begin()) << "\n";
    cout << char(* (a.end()-1)) << "\n";

    // 2️⃣ string& insert (size_t pos, const string& str);
    a.insert(0, "fire ");
    cout << a << " : " << a.size() << "\n";

    // 3️⃣ string& erase (size_t pos=0, size_t Len = npos);
    a.erase(0, 5);
    cout << a << " : " << a.size() << "\n";

    // 4️⃣ size_t find (const string& str, size_t pos = 0);
    auto it = a.find("love");
    if (it != str::npos){
        cout << "포함되어있다!" << "\n";
    }
    cout << it << "\n";
    cout << str::npos << "\n";

    // 5️⃣ string substr (size_t pos = 0, size_t len = npos) const;
    cout << a.substr(5, 2) << "\n";

    return 0;
}