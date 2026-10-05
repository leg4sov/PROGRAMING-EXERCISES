#include <iostream>
using namespace std;
int main () {

int N;
cout << "Introduzca los segundos a convertir: " << endl;
cin >> N;
int h = N / 3600;
int m = (N % 3600) / 60;
int s = N % 60;

cout << N << " segundos, equivalen a: " << h << " horas," << m << " minutos," << s << "segundos. " << endl; 

}