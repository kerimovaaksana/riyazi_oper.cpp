#include <iostream>
using namespace std;

int main(){
int a, b;
cin >> a ;
cin >> b ;

// cout <<"a ve b ededinin cemi = " << a + b << endl;

// cout <<"a ve b ededinin ferqi = " << a - b << endl;

// cout <<"a ve b ededinin hasili = " << a * b << endl;

// cout <<"a ve b ededinin qismeti = " << float(a) / b << endl;

// cout <<"a ve b ededinin qaligi = " << a % b << endl;


// Duzbucaqlinin terefleri daxil edilir.Buna gore sahe ve perimetri hesablayib gosterin.

cout << "Duzbucaqlinin birinci terefini daxil edin: ";
cin >> a;

cout << "Duzbucaqlinin ikinci terefini daxil edin: ";
cin >> b;

cout << "Terefi " << a << " ve  terefi " << b << " olan duzbucaqlinin sahesi = " << a*b << endl;
cout << "Terefi " << a << " ve   terefi " << b << "olan duzbucaqlinin perimetri = " << 2*(a+b) << endl;





return 0;
}