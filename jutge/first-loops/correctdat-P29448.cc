#include <iostream>
using namespace std;

int main() {

    int dias, meses, años;

    while(cin >> dias >> meses >> años ){

    if(meses > 12 or meses < 1){ //vemos si la cantidad de meses es correcta

        cout << "Incorrect Date" << endl;
    }


    else if(meses == 1 or meses == 3 or meses == 5 or meses == 7 or meses == 8 or meses == 10 or meses == 12){ //Vemos si la cant. de dias son correctos 


        if(dias <= 31 and dias >= 1){

            cout << "Correct Date" << endl;
        }

         else{

            cout << "Incorrect Date" << endl;
        }

        

    }

    else if(meses == 4 or meses == 6 or meses == 9 or meses == 11){ //Vemos si la cant. de dias son correctos 


        if(dias <= 30 and dias >= 1){

            cout << "Correct Date" << endl;
        }

         else{

            cout << "Incorrect Date" << endl;
        }

    }

    else if(meses == 2){ //Vemos si la cant. de dias son correctos, comprobamos los años bisiestros

        if(años % 100 == 0){

            if((años/100)%4 == 0){ // para años que teminen en 00 como siglos

                if (dias <= 29 and dias >= 1){

                    cout << "Correct Date" << endl;

                }

                else{

                     cout << "Incorrect Date" << endl;
                 }
            }
            else if((años/100)%4 != 0){

                if (dias <= 28 and dias >= 1){

                    cout << "Correct Date" << endl;

                }

                else{

                     cout << "Incorrect Date" << endl;
                 }
            }


        }
        
        else if (años % 4 == 0){ //para años normales

            
                if (dias <= 29 and dias >= 1){

                    cout << "Correct Date" << endl;

                }

                else{

                     cout << "Incorrect Date" << endl;
                 }
        }

        else if (años % 4 != 0){

             
                if (dias <= 28 and dias >= 1){

                    cout << "Correct Date" << endl;

                }

                else{

                     cout << "Incorrect Date" << endl;
                 }
                
        }

        
    }


}

}