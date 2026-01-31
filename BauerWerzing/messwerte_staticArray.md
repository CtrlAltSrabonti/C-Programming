# Static Array
- The user must enter the number of values first

- The array size is fixed before input
## Algorithm
1. Read anzahl
2. Allocate array once
3. Read exactly anzahl values
4. Process array
   
Example implementation:
```
int anzahl;
double werte[MAXANZ];
```
or (still fixed size):

```
double *werte = malloc(anzahl * sizeof(double));

```
Concept:
➡️ statisch in der Größe (even if allocated with malloc, it’s still fixed)

- Der arithmetische Mittelwert sowie das Minimum und Maximum  einer vom Benutzer einzugebenden Folge von Messwerten soll berechnet und ausgegeben werden
- Die Messwerte (Messwerte = 4, if 2.5, 3.0, 1.5, 4.0) sollen in einem Array gespeichert werden
- Die Anzahl der Zahlen in der Zahlenfolge soll gleich zu Beginn erfragt werden, ist also bei der Eingabe der Zahlenfolge (10, 8, 6, 4 bekannt)
- vom Benutzer einzugebend ------> scanf
- Folge von Messwerten ---> loop + Array
- Array gespeichert -----> double werte[]
- Anzahl der Zahlen in der Zahlenfolgen -----> ask for n first
- Arithmetischer Mittelwert -----> Sum / n
- Minimum und Maximum ------> Comparison loop

- ERKLÄRUNG: https://chatgpt.com/share/697cb133-4968-8002-a4fc-4b65353b1710

```
#include <stdio.h>
#include<stdlib.h>
#include "Diverses.h"
#define MAXANZ 100

int main(void) {


int anzahl;
int i, r;
double werte[MAXANZ], max, min, mw, summe = 0 ; /*Array of double*/

//*Einlesen der Anzahl der Messwerte*/
do {
    printf("\nGeben Sie die Anzahl der Messwerte (>0 und <%d) ein\n",MAXANZ);
   r = scanf("%i",&anzahl); INCLR
} while (r <1 || anzahl<= 0 || anzahl > MAXANZ); /*r < 1  means invalid input (not int value)*/

//*Die Messwerte in einem Array speichern*/
/*Loop runs anzahl times*/
/*Each value is stored in werte[i]*/

for(i= 0; i< anzahl; i= i+1){
    do{
        printf("Messwert %i.?",i+1)
        /*Prompt the user which measurement number they are about to enter. i + 1 is used because array indices start at 0, but the human expects counting to start at 1.*/
        r = scanf("%lf",&werte[i]); INCLR
    } while (r <1);  /*Input validation: the program keeps asking for input until scanf successfully reads the expected value */
}


//*Berechnung von arithmetischer Mittelwert*/
for(i= 0; i<anzahl; i=i+1){

    summe = summe + werte[i];
}
mw = summe /anzahl;

//*Berechnung von Minimum und Maximum*/
/*Assume the first element of the array is both the minimum and the maximum (for now).*/
min = werte[0];
max = werte[0];
/*Loop runs "anzahl" times*/
for(i =1; i< anzahl; i= i+1){
    if (wert[i] < min) min = wert[i];/*if element of the current index is smaller than the baseline */
    if (wert[i]> max) max = wert[i];

}

//*Ausgabe der Werte*/
printf("\n");
printf("\nAnzahl der Messwerte %i\n",anzahl);
printf("\nMittelwert der Werte\n %g",mw); //removes trailing zeros
printf("\nMinimumwert der Werte\n %g",min);
printf("\nMaximumwert der Werte\n %g",max); /**/

printf("\n");


}
```
