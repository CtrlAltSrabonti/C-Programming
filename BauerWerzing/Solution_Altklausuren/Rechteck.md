# Aufgabe 3 (30 Punkte)
<img width="985" height="732" alt="image" src="https://github.com/user-attachments/assets/94eeeb08-7d18-4b4c-aa08-6b6a9e14b600" />

<img width="981" height="707" alt="image" src="https://github.com/user-attachments/assets/8453cfc2-540c-4d0d-8c86-44c46a03abd0" />
<img width="979" height="291" alt="image" src="https://github.com/user-attachments/assets/d0ee7594-db06-4284-927c-f4626d2b2782" />






# Working with struct, functions, user input, and basic geometry (rectangle points calculation).

<img width="1150" height="483" alt="image" src="https://github.com/user-attachments/assets/da222d1e-7e24-491f-912c-375e1c1cc48c" />

<img width="973" height="303" alt="image" src="https://github.com/user-attachments/assets/09718585-4b78-498d-9f16-74299a4e7652" />

<img width="1100" height="410" alt="image" src="https://github.com/user-attachments/assets/d2eb7a6d-e8d1-4f7d-9ab4-644b2877e707" />

<img width="1059" height="303" alt="image" src="https://github.com/user-attachments/assets/fe867219-e35e-4ffb-b202-7fb6eb66caae" />

<img width="1059" height="303" alt="image" src="https://github.com/user-attachments/assets/9a0d0ef1-2779-43cd-b7cf-e16dd9edd79e" />


## What we need to know
### Why struct is needed here?

<img width="1134" height="564" alt="image" src="https://github.com/user-attachments/assets/96f0955d-3afa-434b-bed1-1dde4bafdace" />

### Why call by reference?

<img width="996" height="706" alt="image" src="https://github.com/user-attachments/assets/887b8fbb-89c2-4a19-915c-4255f92ef964" />

<img width="1120" height="459" alt="image" src="https://github.com/user-attachments/assets/dfd928f0-b435-4233-876d-3ea6254c3abd" />

<img width="944" height="295" alt="image" src="https://github.com/user-attachments/assets/47072c3a-922d-4b78-9bd8-e56a8bde8373" />

## Program

```
/*LIFO Prinzip (Stapel)*/

#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

// struct definieren
struct rechteck {
    double x_0, y_0;
    double a, b;
};

// Schreiben eine Funktion

void print_rechteck (struct rechteck *arg)
{
    /*local variables*/
    double x1, y1, x2, y2, x3, y3;


    /*Calculation using given formula*/

    x1 = arg->x_0 + arg->a;
    y1 = arg->y_0;

    x2 = arg->x_0 + arg->a;
    y2 = arg->y_0 + arg->b;

    x3 = arg->x_0;
    y3 = arg->y_0 + arg->b;

    /*Ausgabe wie die Loesungsbeispiel*/

    printf("P0: (%lf, %lf)\n", arg->x_0, arg->y_0); /*arg is pointer. So we access each member of struct using pointer*/
    printf("P1: (%lf, %lf)\n", x1, y1);
    printf("P2: (%lf, %lf)\n", x2, y2);
    printf("P2: (%lf, %lf)\n", x3, y3);

    printf("a: %lf, b: %lf\n", arg->a, arg->b);


}

// Testen in einem Hauptprogramm

int main(void)
{
    struct rechteck rec; // struct rechteck itself is a data type
    int r;
    double x0, y0, a, b;

    /*Eingabe: Benutzer auffordern*/

    do
    {
    printf("\nwie lautet x_0 ??\n");
    r = scanf("%lf",&x0); INCLR
    }
    while (r < 1);

    do
    {
    printf("\nwie lautet y_0 ??\n");
    r = scanf("%lf",&y0); INCLR
    }
    while (r < 1);

    do
    {
    printf("\nwie lautet a ??\n");
    r = scanf("%lf",&a); INCLR
    }
    while(r < 1 || a <= 0);


    do
    {
    printf("\nwie lautet b ??\n");
    r = scanf("%lf",&b); INCLR
    }
    while(r < 1 || b <= 0);

    /*Seitenlaenge Ueberpruefen*/

    if (a <= 0 || b <= 0)
    {
        printf("\nFehler!Seitenlaenge muessen groesser als 0 sein.");
        return 1;

    }
    else /*Eingelesene Werte der Strukturvariable zuweisen*/
    {
       /*- r is a variable of struct rechteck type
        - using dot operator for non-pointer struct
        */
        rec.x_0 = x0;
        rec.y_0 = y0;

        rec.a = a;
        rec.b = b;

    }

    /*Ausgabe: Funktion aufrufen*/
    print_rechteck(&rec); /*Since one function parameter passed, so one argument*/

    return 0;


}



```


