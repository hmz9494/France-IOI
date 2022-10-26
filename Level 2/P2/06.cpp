#include <iostream>
using namespace std ;
int main () {
    int nbDeplacements ;
    cin >> nbDeplacements ;
    int deplacement[nbDeplacements] ;
    for (int i=0 ; i<nbDeplacements ; i++)
        cin >> deplacement[i] ;
    for (int i=nbDeplacements-1 ; i>=0 ; i++) {
        if (deplacement[i] == 1)
            cout << 2 << endl ;
        else if (deplacement[i] == 2)
            cout << 1 << endl ;
        else if (deplacement[i] == 4)
            cout << 5 << endl ;
        else if (deplacement[i] == 5)
            cout << 4 << endl ;
    }
}
