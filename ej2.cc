//Especificación: Diseña un programa que lea un número entero positivo $N$ de tres cifras 
//(asume que siempre se cumple $100 \le N \le 999$) y calcule e imprima la suma de sus tres dígitos.

//Entrada: Un único número entero $N$ de tres cifras (ejemplo: 352).
//Salida: La suma de sus tres dígitos seguida de un salto de línea (para 352, debe imprimir 10, ya que $3 + 5 + 2 = 10$).

#include <iostream>
using namespace std;

int main () {
int N;
cin >> N;
int N1 = N/100,N2 = (N%100)/10, N3 = (N%100)%10; // esto lo hacemos para asignar y calcular al mismo timpo la variable

int Nsol = N1+N2+N3;

cout << Nsol << endl;

}