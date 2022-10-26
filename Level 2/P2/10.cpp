#include <iostream>
#include <algorithm>
using namespace std ;
int main () {
    int nbEmplacements ;
    cin >> nbEmplacements ;
    int num[nbEmplacements] ;
    int emplacement[nbEmplacements] ;
    int res[nbEmplacements] ; 
    for (int i=0 ; i<nbEmplacements ; i++) {
        cin >> num[i] ;
        emplacement[i] = num[i] ;
    }
    sort (emplacement , emplacement + nbEmplacements) ;
    for (int i=0 ; i<nbEmplacements ; i++) {
        for (int k=0 ; k<nbEmplacements ; k++) {
            if (emplacement[i] == num[k]) {
                res[i] = k ;
            }
        }
    }
    for (int i=0 ; i<nbEmplacements ; i++)
        cout << res[i] << endl; 
}
