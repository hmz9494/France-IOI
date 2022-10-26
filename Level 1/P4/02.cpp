#include <iostream>
using namespace std ;
int main () {
    int nbJours ;
    cin >> nbJours ;
    cout << ((nbJours * 24 - 8 * nbJours) * 3600) << endl ;
}
