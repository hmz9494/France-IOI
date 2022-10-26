#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int largeurMax , largeurMin ;
    cin >> largeurMax >> largeurMin ;
    int volumeSocle = 0  ;
    int largeur = largeurMax ;
    repeat(largeurMax - largeurMin + 1) {
        volumeSocle = volumeSocle + largeur * largeur ;
        largeur = largeur - 1 ;
    }
    cout << volumeSocle << endl ;
}
