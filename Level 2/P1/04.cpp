#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbNotes ;
    cin >> nbNotes ;
    double somme = 0 ;
    repeat(nbNotes) {
        int note ;
        cin >> note ;
        somme = somme + note ;
    }
    double moyenne = somme / ((double)(nbNotes)) ;
    cout << moyenne ;
}
