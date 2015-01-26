#include <iostream>
using namespace std;

int main () {

float nb1, nb2;

cout << "Veuillez entrer le premier nombre : " << endl;
cin >> nb1;

cout << "Veuillez entrer le deuxieme nombre : " << endl;
while(nb2 == 0) {
cout << "Veuillez ressaisir votre nombre : " << endl;
cin >> nb2;

cout << "La division des nombres " << nb1 << " par " << nb2 << " est égale a " << nb1/nb2 << endl;

return 0;

}
