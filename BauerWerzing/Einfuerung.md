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
This is where the program starts execution.
## Variable declarations
## User input
```
printf("Zu verzinsendes Kapital in Euro? ");
scanf("%f",&kapital);
```
- Asks for capital
- Reads a float
- The & is important: it tells scanf() where to store the value.
  
## Calling the function
```
zinsen = zinsberechnung(kapital,zinssatz,anz_tage);
```
- Passes the user input values to zinsberechnung

- Receives the calculated interest

- Stores it in zinsen

This is the key line where the calculation happens.

- C does not pass variable names.

- It passes numbers.
  ```
  zinsberechnung(kapital, zinssatz, anz_tage);
  ```
  Is treated the same as:
  ```
  zinsberechnung(1000, 5.0, 90);
  ```
- The function never knows the name kapital existed.
-  When a function is called, C takes the value stored in kapital and puts that value into a new local variable k.
## Output
```
printf("\nAnfallende Zinsen: %f Euro\n",zinsen);
```
- Prints the calculated interest

- %f is used for floating-point numbers
  
# 1-4-1-printf.c Beispielprogramm zum Test der Ausgabe mit printf
```
#include <stdlib.h>
#include <stdio.h>

int main(void)

{
    int i=1234;
    char zk[]="Hallo !";
    float x=12.12345689;

    printf(" Beispiele fuer printf : \n");
    printf("%s i ist %d und x %f\n",zk,i,x);

    // string right-aligned in 20 charcters
    // integer right aligned in 10 charcters
    // float width 10,2 decimal places
    printf("%20s i ist %10d und x %10.2f\n",zk,i,x);
    // 10 integer number pad with leading zeros AND %010.2f% zero padded float, after comma 2 position, total 10 characters
    printf("%20s i ist %010d und x %010.2f\n",zk,i,x);
    // Left alignment and field width 20 characters AND %10.2f total 10 character field, after comma 2 position
    printf("%-20s i ist %10d und x %10.2f\n",zk,i,x);
    // Integer in different number systems
    printf("\n i als int- okt- und hex-zahl: ");
    printf("\n%10d %10o und x %10x\n",i, i, i);
    // Print only first 4 characters of the string
    printf("\nText abgeschnitten: %.4s\n\n",zk);
    system("Pause");

}


```

