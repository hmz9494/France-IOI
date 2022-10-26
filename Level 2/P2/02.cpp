#include <iostream>
using namespace std ;
int main () {
    int prix[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20} ;
    int sommeArgent = 0 ;
    for (int i=0 ; i<10 ; i++) {
        int poids ;
        cin >> poids ;
        sommeArgent = sommeArgent + prix[i] * poids ;
    }
    cout << sommeArgent ;
}
