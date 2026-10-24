#include <iostream>
using namespace std;

int main (){

    int x, y;
    cin >> x >> y;

    if (x >= y){
    
        while(x>=y){
        
        cout << x << endl;
        x = x - 1;
        }
    }

    else if (y >= x){

        while (y>=x){

            cout << y << endl;
            y = y - 1;
        }
        
    }

}