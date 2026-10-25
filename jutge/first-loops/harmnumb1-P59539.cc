 #include <iostream>
 using namespace std;


 int main(){

    cout.precision(4);
    cout << fixed;       //para que hayan justo 4 digitos depues del 0

    int n;
    cin >> n;

    double Hn = 0.0; //Numero Harmonico
    int i = 1;
    
    
    while(i<=n){

        Hn = Hn + (1/double(i));
        i = i+1;
        }

    cout << Hn << endl;
    
    }