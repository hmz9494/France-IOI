#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    repeat(20) {
        repeat(20) {
            cout << "OX" ;
        }
        cout << endl ;
        repeat(20) {
            cout << "XO" ;
        }
        cout << endl ;
    }
}
