#include <iostream>
#include <string>
using namespace std ;
int main () {
    int nbPersonnes ;
    cin >> nbPersonnes ;
    for (int i=0 ; i<nbPersonnes ; i++) {
        string prenom , nom ;
        cin >> prenom >> nom ;
        cout << nom << ' ' << prenom << endl ;
    }
}
