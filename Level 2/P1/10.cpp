#include <iostream>
using namespace std ;
int main () {
    int nbFruits , nbPersonnes ;
    cin >> nbPersonnes >> nbFruits ;
    if (nbFruits % nbPersonnes == 0)
        cout << "oui" << endl ;
    else
        cout << "non" << endl ;
}
