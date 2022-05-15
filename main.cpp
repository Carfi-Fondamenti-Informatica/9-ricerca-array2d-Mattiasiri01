#include <iostream>
#include "lib.h"
using namespace std;



int main() {

    // Dichiarazione
    char list1[10][20];
    char name[20];

    // Inizializzazione
    inserimento(list1);
    inserimento(name);
    cout << confronto(list1, name)+1;
}
