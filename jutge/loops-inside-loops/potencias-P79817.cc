#include <iostream>
using namespace std;

int main(){

    int num, potencia;
    
    
    while(cin >> num >> potencia){

        int resultado = num;

        if(potencia == 0){

            cout << "1" << endl;
        }


        else{

        for(int i = 1; i < potencia; i++){

            resultado = resultado * num;
            

        }

        cout << resultado << endl; 

    }
    }


}