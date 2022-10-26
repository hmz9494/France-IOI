#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    repeat(30) {
        cout << "a_" ;
    }
    cout << endl ;
    repeat(30) {
        cout << "b_" ;
    }
    cout << endl ;
    repeat(30) {
        cout << "c_" ;
    }
}
