#include <iostream>
using namespace std ;
int main () {
    int heureArrive ;
    cin >> heureArrive ;
    int prix = 10 + 5 * heureArrive ;
    if (prix > 53)
        prix = 53 ;
    cout << prix << endl ;
}
