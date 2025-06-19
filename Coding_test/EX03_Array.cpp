#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c = 3;

    //array
    int my_array[3] = {1,2,3};

    cout << my_array[0] << " " 
         << my_array[1] << " " 
         << my_array[2] << endl;

    {
        int my_array[3] = {};

        cout << my_array[0] << " " 
             << my_array[1] << " " 
             << my_array[2] << endl;  

    }

    my_array[1] = 5;

    cout << my_array[0] << " " 
         << my_array[1] << " " 
         << my_array[2] << endl;  

    //string array
    //문자열은 기본적으로 문자의 배열 (1:16:00)
    char name[] = "Hello, World!"; // add null -> "Need 14byte!"
    int testnum[3] = {};

    cout << name << " " << sizeof(name) << endl;
    cout << testnum[0] << " " << sizeof(testnum) << endl;

    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'C';

    cout << name << endl;

    name[10] = 'A';
    name[11] = 'B';
    name[12] = 'C';

    cout << name << endl;

    //Null character '\0'
    name[2] = '\0';
    cout << name << endl;


    return 0;
}