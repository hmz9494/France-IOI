#include <iostream>
using namespace std ;
int suite (int terme) {
    if (terme % 2 == 1)
        return terme * 3 + 1 ;
    return terme / 2 ;
}
int main () {
    int terme ;
    cin >> terme ;
    while (terme != 1) {
        cout << suite(terme) << ' ' ;
        terme = suite(terme) ;
    }
}
