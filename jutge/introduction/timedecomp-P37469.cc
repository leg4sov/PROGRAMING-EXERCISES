#include <iostream>
using namespace std;

int main() {

    int x;
    cin >> x;

    int h, m, s;

    h = x / 3600; //como es int/int nos da el nuemro entero de horas
    m = (x % 3600) / 60; // el resto de horas lo dividimos por 60 para sacar minutos (enteros)
    s = (x % 3600) % 60; // segundos 

    cout << h << " " << m << " " << s << endl;

}