#include <iostream>
using namespace std;

int main () {

    int N;
    cin >> N;

    int N1 = N/1000, N2 = (N%1000)/100, N3 = ((N%1000)%100)/10, N4 = ((N%1000)%100)%10;

    
if ((N1 == N4) and (N2 == N3)) {
    cout << "SI" << endl;
}
else {
    cout << "NO" << endl;
}

}
