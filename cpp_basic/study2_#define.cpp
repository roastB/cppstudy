#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159  //#define : 상수, 매크로를 정의 가능하다.
#define loop(x,n) for(int x=1; x<=n; x++)

int main(){
    cout << PI << "\n";
    
    int sum = 0;
    loop(i, 10){
        sum += i;
    }
    cout << sum << "\n";
    return 0;
}