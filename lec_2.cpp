#include<iostream>
using namespace std;

int main(){

    int a = 9;

    int* p = &a;

    cout << p << endl;
     p += 1;

     cout << p << endl;
    return 0;
}