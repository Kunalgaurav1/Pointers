#include<iostream>
using namespace std;

int main(){

/*

    int a = 9;

    cout << &a << endl;

    int * p = &a;
    cout << p << endl;

    cout << *p << endl;

    cout << sizeof(p) << endl;
*/


/*

    float f = 3.3;
    float* fp = &f;

    cout << fp << endl;

    double d = 3.452;
    double * dp = &d;

    cout << dp << endl;
*/

    int a = 9;
    int *p  = &a;

    int *q = p;

    cout << a << endl;
    cout << *p << endl;

    a++;

    cout << a << endl;
    cout << *p << endl;

    int i = *p;
    i++;
    cout << i << endl;
    cout << *p << endl;


    a = 12;
    cout << a << endl;
    cout << *p << endl;

    *p = 34;

    cout << a << endl;
    cout << *p << endl;

    a++;

    cout << a << endl;
    cout << *p << endl;

    (*p)++;

    cout << a << endl;
    cout << *p << endl;

    // a = 34;
    // (*p)++;
    // cout << a << endl;
    // cout << *p << endl;





    return 0;
}