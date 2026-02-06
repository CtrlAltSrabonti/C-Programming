### 1. “Schreiben Sie eine Funktion …”
<img width="944" height="501" alt="image" src="https://github.com/user-attachments/assets/99848c50-1706-493d-9c01-7e896c8cd8b8" />

  
### 2. “Testen Sie die Funktion mit einem Hauptprogramm …”
<img width="934" height="254" alt="image" src="https://github.com/user-attachments/assets/415914b1-0b72-492c-9b3b-de4478ac61c4" />

### 3. “Tabelle für den Sinus hyperbolicus”
<img width="935" height="465" alt="image" src="https://github.com/user-attachments/assets/3d5a40d6-3b60-4db6-b31f-7fefdcbfd191" />

### 4. “Tabellenanfang, Tabellenende und Schrittweite sind vom Benutzer zu erfragen”

<img width="954" height="553" alt="image" src="https://github.com/user-attachments/assets/db53b12b-171d-43c3-a701-5c30027964ad" />

### 5. “Erproben Sie verschiedene Methoden …”

<img width="628" height="289" alt="image" src="https://github.com/user-attachments/assets/7d5a7c54-7f11-42fb-a529-0565c8a0b156" />

### The exercise teaches

<img width="639" height="261" alt="image" src="https://github.com/user-attachments/assets/97be3362-8269-4674-894d-b70eeaca0f08" />

## Program (Call by value)

```
/*Call by value*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"

//Funktiontion definieren

double sinhyp (double x) {

    return (exp(x) - exp(x))/2;
}

// Testen die Funktion in einem Hauptprogramm
int main(void) {
    double a, b, h, x;
    int r, i = 0;

    // Tabellenanfang vom Benutzer erfragen

    do {

        printf("\nGeben Sie Tabellenanfang ein: ");
        r= scanf("%lf",&a); INCLR /*NCLR dient zum Leeren des Eingabepuffers bei fehlerhafter Eingabe und darf nur nach einem fehlgeschlagenen scanf verwendet werden.*/
    } while (r<1); /*Repeat until the user enters a valid number, suppose user enters text, then invalid*/

    // Tabellenende vom Benutzer erfragen
    do {

        printf("\nGeben Sie Tabellenende (b > a) ein: ");
       r = scanf("%lf",&b); INCLR
    } while (r<1 || b < a); /*Repeat until the user enters a valid number and the end value is smaller than the start value*/

    // Schrittweite (Stepsize) vom Benutzer erfragen
    do {

        printf("\nGeben Sie Schrittweite (> 0) ein: ");
        r = scanf("%lf",&h); INCLR
    } while (r<1 || h <= 0); /*Repeat until the user enters a valid number and stepsize must be positive*/

    // How table generates in math
    // How loops generate table
    /*x = a + i*h
     - i = 0, a= 10, h= 2 ---> a =10 + 0*2 = 10
     */
    do {
        x = a + i*h;
        printf("\n%g %g",x,sinhyp(x)); /*%g removes the trailing zeros*/
        i = i +1;
    } while (x < b -h/2); /*a = 0, b = 2, h = 0.5, 0 + 1*0.5 --> 0.5 < 2 means x clearla smaller than b and stops before the wall*/

    printf("\n");

    return 0;
}
```
> *NOTE* To compile a program with math.h library use gcc -o sinus_hyperbolicus sinus_hyperbolicus.c -lm

## Program (Call by reference

```
/*Call by refernce*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Diverses.h"

// Funktion definiren

void sinhyper(double x, double *y) /*parameter x = input value, y = address where result is stored*/
{
    *y = (exp(x) - exp(x)) / 2; /**y means Go to the address stored in y and write the result there*/
}

// Testen die Funktion mit einem hauptprogramm
int main(void) {

    double a, b, h, x, y;
    int i,r;

    // Tabellenanfang User erfragen

    do{
          printf("\nGeben Sie Tabellenanfang ein: ");
          r = scanf("%lf",&a); INCLR
    } while (r <1);

    // Tabellenende User erfragen

     do{
          printf("\nGeben Sie Tabellenende (b >a) ein: ");
          r = scanf("%lf",&b); INCLR
    } while (r <1 || b < a);

    // Schrittweite User erfragen

     do{
          printf("\nGeben Sie Schrittweite (>0) ein: ");
          r = scanf("%lf",&h); INCLR
    } while (r <1 || h<= 0); /*Stepsize must be positive*/

    // How loops generate table

     do{
         /*In left side values of x and in right side multiple values of x is computed*/
         x =  a + i*h;
         sinhyper (x, &y); /*x =  copy of the value y = Go to the address stored in y and write the result there. So, main's variable y gets the result*/
         printf("\n%f %f", x,y);
    } while (x < b- h/2);

    printf("\n");

    return 0;

}

````
