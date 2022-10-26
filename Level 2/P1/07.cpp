#include <iostream>
#include <cmath>
using namespace std ;
int main () {
    double temps ;
    cin >> temps ;
    int distance = round(temps * 340.29 / 1000) ;
    cout << distance ;
}
