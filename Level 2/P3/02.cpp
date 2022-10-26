#include <iostream>
#include <string>
using namespace std ;
int main () {
    string nomPersonne1 , nomPersonne2 ;
    getline(cin , nomPersonne1) ;
    getline(cin , nomPersonne2) ;
    if (nomPersonne1 > nomPersonne2)
        cout << nomPersonne2 << endl ;
    else if (nomPersonne2 > nomPersonne1)
        cout << nomPersonne1 << endl ;
}

