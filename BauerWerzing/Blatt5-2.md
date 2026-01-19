```
/*1. Ask the user how many numbers (<=20)
 2.Read those numbers into the first row of a 2D array
 3. Build a number triangle where
 each element = sum of two neighbors from the row above
 4. Print the triangle*/

#include <stdio.h>

int main(void) {

    // Benutzte Variablen //
    int i = 0, j = 0;
    const int MAX_ANZAHL = 20;
    int zahlen;

    // Ask for number of inputs / Eingabe der Laenge des Arrays //
    // This determines the triangle size
    printf("Geben Sie die Anzahl von Zahlen (max 20) an \n");
    scanf("%d",&zahlen);

    // Limit input to max 20
    // Only the allowed numbers will enter into loop iteration
    while (zahlen <1 || zahlen > MAX_ANZAHL) {
        printf("Versuchen Sie es nochmal\n!");
        printf("Geben Sie die Anzahl von Zahlen an \n");
        scanf("%d", &zahlen);
    }

    // Declare 2D Array
    // Berechnung der ersten Reihe //
    // Einlesen der ersten Reihe //
    // Stores user input in row 0
    // Declare Array
    int a[MAX_ANZAHL][MAX_ANZAHL];
    for (j = 0; j < zahlen; j++)
    {
        scanf("%d", &a[0][j]);
    }

    // Berechnung der zweiten und folgende Reihen //
    // i Zeilen Durchlauf und j Spalten Durchlauf
    // Row 0 is not calculated
    for(i = 1; i< zahlen; i++)
    {
        for (j = 0; j < zahlen - i; j++)
        {
            // each element = sum of two neighbors from the row above
            a[i][j] = a[i -1][j] + a[i -1][j+1];
        }

    }

    // Ausgabe von Dreieck //
    printf("\nZahlendreieck\n");
    for(i = 0; i< zahlen; i++)
    {
        for(j= 0; j < zahlen - i; j++)
        {
            // Every number takes 3 Character spaces
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
```

## Variable declarations
``
int i = 0, j = 0;
``
- i → row index (Zeile)

- j → column index (Spalte)

- Initialized to 0 (good practice)
```
const int MAX_ANZAHL = 20;

```
- Maximum allowed number of input values

- Used to:

- limit input

- define array size

- const → value cannot change
  
```
int zahlen;
```
- Stores how many numbers the user wants to enter

- Determines triangle size
## Ask user for number of inputs
```
printf("Geben Sie die Anzahl von Zahlen (max 20) an \n");
scanf("%d",&zahlen);

```
- Asks user how many numbers they want

- Stores result in zahlen
## Input validation (VERY IMPORTANT)
```
while (zahlen <1 || zahlen > MAX_ANZAHL) {

```
- Loop repeats if:

- zahlen < 1 → invalid (no numbers)

- zahlen > 20 → exceeds maximum

    
