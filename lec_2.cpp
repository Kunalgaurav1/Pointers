#include<iostream>
using namespace std;

int main(){

    int a = 9;

    int* p = &a;

    cout << p << endl;
     p += 1;

     cout << p << endl;


     double d = 3.4556;
     double * dp = &d;

     cout << dp << endl;

     dp += 1;
     cout << dp << endl;

     char c = 'e';
     char *cp = &c;

     cout << cp << endl;

     cp += 1;
    
     cout << cp << endl;
    return 0;
}