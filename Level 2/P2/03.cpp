#include <iostream>
using namespace std ;
int main () {
    int quantiteRestante[11] = {0} ;
    int nbOperations ;
    cin >> nbOperations ;
    for (int iIngredient=1 ; iIngredient<=nbOperations ; iIngredient++) {
        int numIngredient , quantite ;
        cin >> numIngredient >> quantite ;
        quantiteRestante[numIngredient] = quantiteRestante[numIngredient] + quantite ;
    }
    for (int iIngredient=1 ; iIngredient<=10 ; iIngredient++)
        cout << quantiteRestante[iIngredient] << endl ;
}
