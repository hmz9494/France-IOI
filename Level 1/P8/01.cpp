#include <iostream>
using namespace std ;
int main () {
    int population ;
    cin >> population ;
    int nbMalades = 1 ;
    int nbJours = 1 ;
    while (nbMalades < population) {
        nbMalades = nbMalades + nbMalades * 2 ;
        nbJours = nbJours + 1 ;
    }
    cout << nbJours ;
}

