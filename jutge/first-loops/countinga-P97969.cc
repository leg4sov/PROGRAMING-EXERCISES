#include <iostream>
using namespace std;

int main(){

    char texto;
    cin >> texto;

    int sum_a = 0;
    while (texto != '.'){

        if (texto == 'a'){

            sum_a = sum_a + 1;
        }

        cin >> texto;
    }

    cout << sum_a << endl;

}