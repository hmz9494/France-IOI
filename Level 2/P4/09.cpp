#include <iostream>
using namespace std ;
int main () {
    int nbConvertions ;
    cin >> nbConvertions ;
    for (int i=0 ; i<nbConvertions ; i++) {
        double valeur ;
        char unite ;
        cin >> valeur >> unite ;
        switch (unite) {
            case 'm' : cout << (valeur / 0.3048) << ' ' << 'p' << endl ;
                  break ;
            case 'g' : cout << (valeur * 0.002205) << ' ' << 'l' << endl ;
                  break ;
            case 'c' : cout << (32 + valeur * 1.8) << ' ' << 'f' << endl ;
                  break ;
        }
    }
}
