#include <iostream>
using namespace std ;
int main () {
    int nombre , proposition ;
    cin >> nombre >> proposition ;
    int tentative = 1 ;
    while (nombre != proposition) {
        if (nombre > proposition)
            cout << "c'est plus" << endl ;
        else
            cout << "c'est moins" << endl ;
        tentative = tentative + 1 ;
        cin >> proposition ;
    }
    cout << "Nombre d'essais nécessaires : " << endl << tentative ;
}
