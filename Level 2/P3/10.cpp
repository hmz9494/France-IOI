#include <iostream>
#include <string>
using namespace std ;
int main () {
    string nomEtudiant ;
    cin >> nomEtudiant ;
    if (nomEtudiant[0] >= 'A' && nomEtudiant[0] <= 'F')
        cout << 1 << endl ;
    else if (nomEtudiant[0] >= 'G' && nomEtudiant[0] <= 'P')
        cout << 2 << endl ;
    else
        cout << 3 << endl ;
}
