#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int numPersonne , tailleListe ;
    cin >> numPersonne >> tailleListe ;
    bool existe = 1 ;
    repeat(tailleListe) {
        int num ;
        cin >> num ;
        if ( (num == numPersonne) )
            existe = 0  ; 
    }
    if (existe)
        cout << "Encore dans la ville" << endl ;
    else
        cout << "Sorti de la ville" << endl ;
}
