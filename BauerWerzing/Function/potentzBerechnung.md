# Berechnung einer Potenz mit natuerlichem Exponenten mittels
1. iterativer Funktion
2. rekursiver Funktion

> "....mit einer beliebigen Kommazahl a als Basis und einem nicht negativen, ganzzahligen Exponenten n...."
- return type double ---> mehr Genauigkeit
- 
### Requirements for function build
- Input: double a, int n
- Output: double potenz

## Programm

```
#include <stdlib.h>
#include <stdio.h>
#include "Diverses.h"

/*Funktion zur iterativen Berechnung der Potenz a^n*/
double potenz_iterativ (double a, int n) /*input a and n*/
{
    double ergebnis = 1;
    int i;

    for(i = 1; i <= n; i++)
        ergebnis =  ergebnis * a;
    return ergebnis;

}

/*Funktion zur rekursiven Berechnung der Potenz a^n*/

double potenz_rekursiv (double a, int n)
{
    if (n ==  0) return 1; /*Gegeben in der Aufgabenstellung a⁰ = 1*/
    else
    {
        return a * potenz_rekursiv(a,n-1); /*See the formula given in question a = a * a⁽n-1)*/

    }
}

/*Testen mit einem Hauptprogramm*/

int main(void)
{
    double basis;
    int exp, r;

    /*Eingabe*/

    do
    {
        printf("\nGib eine beliebige Kommazahl als Basis ein: \n");
        r = scanf("%lf",&basis);INCLR
    }
    while (r <1);

    do
    {
        printf("\nGib eine nicht negative Ganzzahl als Exponent ein: \n");
        r = scanf("%d",&exp); INCLR
    }
    while (r <1 || exp <0); /*For invalid input loop reüeats*/

    /*Ausgabe*/
    printf("\nPotenz iterativ = %lf\n",potenz_iterativ(basis, exp)); /*placeholder %lf, because we define return type of function as double*/
    printf("\nPotenz rekursiv = %lf\n",potenz_rekursiv(basis, exp));

    return 0;


}


```
