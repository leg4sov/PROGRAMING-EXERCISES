#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int x = a;
    int y = b;

    int resto;

   while(y != 0){

    resto = x % y;

    x = y;
    y = resto;

   }

   cout << "The gcd of " << a << " and " << b << " is " << x << "." << endl;

}