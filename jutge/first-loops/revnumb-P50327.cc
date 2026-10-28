#include <iostream>
using namespace std;

int main (){

    int num;
    cin >> num;

    int inverted_num;


    if (num == 0){
        cout << num;
    }

    else {
    while (num != 0){

        inverted_num = num % 10;
        cout << inverted_num; 

        num = num / 10;
    }

    }
 cout << endl;

}