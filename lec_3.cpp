#include<iostream>
using namespace std;

int main(){
    int a[10];

    a[0] = 5;
    a[1] = 10;

    cout << a << endl;
    cout << &a[0] << endl;
    cout << &a << endl;

    cout << *a << endl;
    cout << *(a+1) << endl;

    int* p = &a[0];

    cout << p << endl;
    cout << a << endl;

    cout << &p << endl;
    cout << &a << endl;

    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;

    p = p+1;
   // a = a + 1;//you can not do this and this also a++;

    return 0;
}