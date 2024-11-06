#include <stdio.h>

/*
In C wird bei Ganzzahloperationen wie 8 / 5 eine Ganzzahldivision durchgeführt. Das bedeutet, dass Nachkommastellen abgeschnitten werden.
8 / 5 ergibt 1, da 8 in 5 genau einmal passt (Rest 3 wird ignoriert).
Nun wird 1 / 2 berechnet, was ebenfalls eine Ganzzahldivision ist.
1 / 2 ergibt 0, weil 1 nicht vollständig durch 2 teilbar ist und Nachkommastellen ignoriert werden
*/

int main() {
    // Ausdruck und Ausgabe
    printf("%d\n", (8 / 5) / 2);
    
    return 0;
}