#include<iostream>
using namespace std;

int main(){


/*

   int a = 9;
   int* p = &a;
   int ** q = &p;

   cout << a << endl;
   cout << *p << endl;
   cout << **q << endl;

   a++;
   cout << a << endl;
   cout << *p << endl;

   a = 69;
   cout << a << endl;
   cout << *p << endl;

   *p = 70;
   cout << a << endl;
   cout << *p << endl;

   a++;
   cout << a << endl;
   cout << *p << endl;

   (*p)++;
   cout << a << endl;
   cout << *p << endl;
*/
/*

int a = 9;
int* p = &a;
int** q = &p;

cout << a << endl;
cout << p << endl; //address of a
cout << *p << endl;//value of a
cout << q << endl; //address of p
cout << *q << endl; //address of a
cout << **q << endl; // value of a
*/

int a = 7;
int * c = &a;
cout << c << endl;
c = c + 3;
cout << c << endl;



    


    return 0;
}