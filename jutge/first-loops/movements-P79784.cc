#include <iostream>
using namespace std;

int main (){

    char cords;
    int x = 0;
    int y = 0;

    while (cin >> cords){

        if (cords == 's'){

            y = y + 1;

        }

        else if (cords == 'n'){
            
            y = y - 1;

        }

        else if (cords == 'e'){


            x = x + 1;

        }

        else if (cords == 'w'){

            x = x - 1;

        }

    }

    cout << "(" << x << ", " << y << ")" << endl;


}