<img width="590" height="851" alt="image" src="https://github.com/user-attachments/assets/5bd15e79-5043-4639-82a4-35c7f47c1872" />
``
/*Fibonacci Zahlen mit Arrays*/
/*
 - Eine nicht-negative Ganzzahl n einliest
 - Alle Fibonacci Zahlen von 0 bis n berechnen
 - Jede neue Zahl ist die Summe der zwei vorherigen Fibonacci-Zahlen
 - Die Werte in einem dynamisch erzeugten Array speichern
 - Hinweis:
 - Memory must exist BEFORE you store values
 - Dynamic memory is allocated first using "malloc", then the allocated memory is initialized and accessed like an array using indices */
```
~~~
#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

int main(void) {

    int n, r, i;
    int *fibonacci;

    do{
        printf("Geben Sie eine nicht negative Ganzzahl ein:\n");
        r = scanf("%d",&n); INCLR
    } while( r < 1 || n < 0);

    // Dynamisches Feld erzeugen
    /*Fibonacci numbers go from 0 to n. That is*/
    fibonacci = (int*)malloc((n+1) * sizeof(int));

    // If malloc fails

    if (fibonacci == NULL) {
        printf("Speicher konnte nicht reserviert werden\n");
        return 1;
    }

    // Initialisierung der ersten zwei Werte
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    // Berechnen von fibonacci Folge
    for (i = 2; i <= n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci [i -2];
    }

    // Ausgabe Fibonaccifolge
    printf("\nDie Fibonaccifolge von 0 bis %d lautet: \n", n);
    for(i= 0; i <= n; i++){
        printf("%d\n", fibonacci[i]);
    }
    printf("\n");
    free(fibonacci);
    return 0;

}

~~~
