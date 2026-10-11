    
    //Enunciado: Escribe un programa en C++ que lea una secuencia de números 
    //enteros que termina con la marca de fin -1 (el cual no forma parte de los datos a procesar).
    
    #include <iostream>
    using namespace std;

    int main (){

        int x;
        cin >> x;

        if (x == -1){

            cout << "secuencia vacia" << endl;

        }

        else {

    
        int suma = 0;
        int num = x;

        while (x != -1){

            if (x > num){

                
                suma = suma + 1;

            }

            num = x;
            cin >> x;

        }
            
        cout << suma << endl;

        }

    }