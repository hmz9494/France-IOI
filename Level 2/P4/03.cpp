#include <iostream>
using namespace std ;
void ligne (int longueur , char motif) {
    for (int i=0 ; i<longueur ; i++) 
        cout << motif ;
    cout << endl ;
}
int main () {
    int longueur ;
    cin >> longueur ;
    ligne(longueur , 'X') ;
    ligne(longueur , '#') ;
    ligne(longueur , 'i') ;
}
