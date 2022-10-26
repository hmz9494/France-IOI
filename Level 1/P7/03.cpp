#include <iostream>
using namespace std ;
int main () {
    int numMois ;
    cin >> numMois ;
    if ( (numMois == 4) || (numMois == 5) || (numMois == 6) || (numMois == 10) )
        cout << 31 ;
    else {
        if (numMois == 11)
            cout << 29 ;
        else
            cout << 30 ;
    }
}
