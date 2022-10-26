#include <iostream>
#define repeat(nb) for(int i=0 ; i<(nb) ; i++)
using namespace std ;
int main () {
    int nbJetons ;
    cin >> nbJetons ;
    repeat(nbJetons) {
        int x , y ;
        cin >> x >> y ;
        bool zoneJaune = (x > 25) && (x < 50) && (y > 20) && (y < 45) ;
        bool zoneBleue = (x > 10) && (x < 85) && (y > 10) && (y < 55) ;
        bool enDehors = (x > 90) || (x < 0) || (y < 0) || (y > 70) ;
        bool zoneRouge = (((x > 15) && (x < 45)) || ((x > 60) && (x < 85))) && (y > 60) ;
        if (!zoneJaune && zoneBleue)
            cout << "Dans une zone bleue" << endl ;
        else if (enDehors)
            cout << "En dehors de la feuille" << endl ;
        else if (zoneRouge)
            cout << "Dans une zone rouge" << endl ;
        else
            cout << "Dans une zone jaune" << endl ;
    }
}
