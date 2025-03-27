#include <bits/stdc++.h>
using namespace std;

// 🔢 [단순 array 사용]
// int main(){
//     int a[] = {1, 2, 3};
//     do{
//         for(int i : a) cout << i << " ";
//         cout << "\n";
//     }while(next_permutation(a, a+3));
// }

// 🔢 [vector 사용 : 동적배열]
int main(){
    vector<int> a = {2, 1, 3, 100, 200};
    sort(a.begin(), a.end());

    do{
        //[2개만 cout]
        for(int i = 0; i < 2 ; i++){
            cout << a[i] << " ";
        }
        //[전체 순열 cout]
        // for(int i : a) cout << i << " "; 
        cout << "\n";
    }while(next_permutation(a.begin(), a.end()));
}