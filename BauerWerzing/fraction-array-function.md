# pass by reference
- When an array is passed to a function in C, the function receives a pointer to the first element, so changes inside the function directly modify the array in main().
- Arrays behave like pass by reference
<img width="795" height="625" alt="image" src="https://github.com/user-attachments/assets/0dd20d84-09b8-4464-aee7-8912f4a2c7a7" />

## Program
```
#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"


// int *bruch = int array

 int lese_bruch(int *bruch) {
 printf("Geben Sie den Zaehler und Nenner (>0) ein: ");
 scanf("%d %d", &bruch[0], &bruch[1]);  /*Erstes Feldelement Zähler und zweites Feldelement Nenner*/
 if(bruch[1] > 0)
     return 1;
 else
     return 0;
 }
 void ausgabe_bruch (int *bruch){
     printf("%d %d",bruch[0], bruch[1]);

}
 int vergleiche_bruch (int *bruch1, int *bruch2){
     /*Given formula for (a,b) and (c,d)
      - a*d < b*c -> smaller
      - a*d == b*c -> equal
      - a*d > b*c ->  larger
      */

    int link = bruch1[0] * bruch2[1];
    int recht = bruch1[1] * bruch2[0];

    if (link > recht) return 1;
    if (link < recht) return -1;
    return 0;
}

// Hauptprogramm
// When an array is passed to a function, it decays into a pointer to its first element


int main(void) {
    int b1[2], b2[2]  /*An array of 2 integers*/
while (1) {

    printf("Geben Sie den Zaehler und Nenner (>0) eines Bruches ein: \n");
    // If reading the function failed !lese_bruch
    if(!lese_bruch(b1)) /*When pass b1 to function, the function receives int *bruch*/ {
        printf("Falsche Eingabe (Nenner <= 0) - Abbruch!\n");
        break; // Leaves the while loop

    }
    if(!lese_bruch(b2)) /*When pass b2 to function, the function receives int *bruch*/ {
        printf("Falsche Eingabe (Nenner <= 0) - Abbruch!\n");
        break; // Leaves the while loop

    }

    // Ausgabe der Brueche
    ausgabe_bruch(b1);
    printf("\n");

    ausgabe_bruch(b2);
    printf("\n");

    int vergleich = vergleiche_bruch (b1, b2)
    if (vergleich > 0)
        printf("Bruch 1 ist größer\n");
    else if(vergleich <0)
        printf("Bruch ist kleiner\n");
    else
        printf("Beide Brüche sich gleich\n");
    }

    return 0;

}

}

```
## vergleiche_bruch()
<img width="782" height="407" alt="image" src="https://github.com/user-attachments/assets/d5649ec2-7977-45cf-89dc-67898c3b17e9" />

