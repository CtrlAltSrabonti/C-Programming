# 1-3-1-zinsen.c Programm zur Berechnung der Zinsen auf eingesetztes Kapital 

```
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
 float kapital, zinssatz, zinsen;
 int anz_tage;
 
 /* Eingaben */
 printf("Zu verzinsendes Kapital in Euro? ");
 scanf("%f",&kapital);
 
 printf("Anzahl der Tage? ");
 scanf("%d",&anz_tage);
 
 printf("Zinssatz in Prozent? ");
 scanf("%f",&zinssatz);

 /* Berechnung der Zinsen */
 zinsen = kapital*zinssatz*anz_tage/(100*360);
 
 /* Ausgabe des Zinsbetrags */
 printf("\nAnfallende Zinsen: %f Euro\n\n",zinsen);
  
 system("PAUSE");
}

```
## Header files
- stdio.h
Provides input/output functions like printf() and scanf().

- stdlib.h
Provides utility functions, here used for system("PAUSE").

## main function
- The program starts execution here.

- Returns an integer to the operating system (though no explicit return is used)
  
## Variable Declarations

```
float kapital, zinssatz, zinsen;
int anz_tage;

```
- kapital – the invested capital (in euros)

- zinssatz – interest rate (percentage per year)

- zinsen – calculated interest amount

- anz_tage – number of days the capital is invested
- float is used for monetary and percentage values to allow decimals.

## User Input

```
printf("Zu verzinsendes Kapital in Euro? ");
scanf("%f",&kapital);

```
- Prompts the user for the capital amount.

- scanf reads a floating-point number and stores it in kapital.

```
printf("Anzahl der Tage? ");
scanf("%d",&anz_tage);

```
- Asks for the number of days.

- Stored as an integer.
  
```
printf("Zinssatz in Prozent? ");
scanf("%f",&zinssatz);

```
- Asks for the interest rate in percent.

- Stored as a floating-point number.
  
## Interest Calculation
  ```
  zinsen = kapital*zinssatz*anz_tage/(100*360);
  ```
## Output
```
printf("\nAnfallende Zinsen: %f Euro\n\n",zinsen);
```
- Prints the calculated interest

- %f is used for floating-point numbers

## Program Pause
# 1-3-2-zinsen.c Programm zur Berechnung der Zinsen auf eingesetztes Kapital unter Verwendung einer selbst geschriebenen Funktion
```
#include <stdlib.h>
#include <stdio.h>

float zinsberechnung(float k, float zs, int t)
{
 float res;
 res = k*zs*t/(100*360);
 return res;
}

int main(void)
{
 float kapital, zinssatz, zinsen;
 int anz_tage;
 
 /* Eingaben */
 printf("Zu verzinsendes Kapital in Euro? ");
 scanf("%f",&kapital);
 
 printf("Anzahl der Tage? ");
 scanf("%d",&anz_tage);
 
 printf("Zinssatz in Prozent? ");
 scanf("%f",&zinssatz);

 /* Berechnung der Zinsen */
 zinsen = zinsberechnung(kapital,zinssatz,anz_tage);
 
 /* Ausgabe des Zinsbetrags */
 printf("\nAnfallende Zinsen: %f Euro\n",zinsen);
 
 system("PAUSE");
}

```
## The interest calculation function

```
float zinsberechnung(float k, float zs, int t)
{
 float res;
 res = k*zs*t/(100*360);
 return res;
}
```

## The main() function
