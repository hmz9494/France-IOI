#include <iostream>
using namespace std ;
int main () {
    int premierDe , deuxiemeDe ;
    cin >> premierDe >> deuxiemeDe ;
    int prix ;
    if (premierDe + deuxiemeDe >= 10) {
        cout << "Taxe spéciale !" << endl ;
        prix = 36 ;
    }
    else {
        cout << "Taxe régulière" << endl ;
        prix = (premierDe + deuxiemeDe) * 2 ;
    }
    cout << prix << endl ;
}
