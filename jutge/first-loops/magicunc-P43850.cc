#include <iostream>
using namespace std;

int main() {

    int numpublico;
    int numsecreto;

    while(cin >> numpublico){

        numsecreto = ((((numpublico / 5) - 9) / 4) - 6) / 5;

        cout << numsecreto << endl;

    }

}