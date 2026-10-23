#include <iostream>
using namespace std;

int main (){

    int eur, cents;
    cin >> eur >> cents;

    int e500, e200, e100, e50, e20, e10, e5, e2, e1; //calculamos los euros 

    e500 = eur / 500;
    e200 = (eur - (e500*500)) / 200;
    e100 = (eur - (e500*500)- (e200*200)) / 100;
    e50 = (eur - (e500*500)- (e200*200) - (e100*100)) / 50;
    e20 = (eur - (e500*500)- (e200*200) - (e100*100) - (e50*50)) / 20;
    e10 = (eur - (e500*500)- (e200*200) - (e100*100) - (e50*50) - (e20*20)) / 10;
    e5= (eur - (e500*500)- (e200*200) - (e100*100) - (e50*50) - (e20*20) - (e10*10)) / 5;
    e2 = (eur - (e500*500)- (e200*200) - (e100*100) - (e50*50) - (e20*20) - (e10*10) - (e5*5)) / 2;
    e1 = (eur - (e500*500)- (e200*200) - (e100*100) - (e50*50) - (e20*20) - (e10*10) - (e5*5) - (e2*2));

    int c50, c20, c10, c5, c2, c1;

    c50 = cents / 50;
    c20 = (cents - (c50*50)) / 20;
    c10 = (cents - (c50*50) - (c20*20)) / 10;
    c5 = (cents - (c50*50) - (c20*20) - (c10*10)) / 5;
    c2 = (cents - (c50*50) - (c20*20) - (c10*10) - (c5*5)) / 2;
    c1 = (cents - (c50*50) - (c20*20) - (c10*10) - (c5*5) - (c2*2));


    cout << "Banknotes of 500 euros: " << e500 << endl;
    cout << "Banknotes of 200 euros: " << e200 << endl;
    cout << "Banknotes of 100 euros: " << e100 << endl;
    cout << "Banknotes of 50 euros: " << e50 << endl;
    cout << "Banknotes of 20 euros: " << e20 << endl;
    cout << "Banknotes of 10 euros: " << e10 << endl;
    cout << "Banknotes of 5 euros: " << e5 << endl;
    cout << "Coins of 2 euros: " << e2 << endl;
    cout << "Coins of 1 euro: " << e1 << endl;

    cout << "Coins of 50 cents: " << c50 << endl;
    cout << "Coins of 20 cents: " << c20 << endl;
    cout << "Coins of 10 cents: " << c10 << endl;
    cout << "Coins of 5 cents: " << c5 << endl;
    cout << "Coins of 2 cents: " << c2 << endl;
    cout << "Coins of 1 cent: " << c1 << endl;



}