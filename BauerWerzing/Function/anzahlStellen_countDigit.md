# General algorithm to memorize
## 1. Count digits
### Code inside loop
````
z = z / 10;
anz++;

````
*Algorithmic explanation*

- Dividing by 10 removes one digit

- Each removal means one digit existed

- We count how many times this is possible until z == 0

- Example: z = 472
<img width="975" height="362" alt="image" src="https://github.com/user-attachments/assets/6e23cd6d-49df-413d-a16b-f6206fd4a897" />

## 2, Sum of digits
### Code inside loop
```
sum += z % 10;
z /= 10;

```
*Algorithmic explanation*

- z % 10 extracts the last digit

- This digit is added to sum

- Then the digit is removed by dividing by 10
- Example: z = 472
  
<img width="975" height="362" alt="image" src="https://github.com/user-attachments/assets/a1723f36-c9d8-440a-9cc3-62c4bc9577b4" />

## 3. Reverse number

### Code inside loop
```
rev = rev * 10 + z % 10;
z /= 10;
```
*Algorithmic explanation*
- This does two things at once:
rev * 10
→ shifts existing digits left
- '+'z % 10
→ appends the last digit of z

## 4. Product of digits

### Code inside loop

```
prod *= z % 10;
z /= 10;

```
*Algorithmic explanation*

- Multiply current product with the last digit

- Remove the digit

- Repeat until no digits remain


## What is asked in the question

- You are given a whole number (int) from the user and must:

- Count how many digits it has

- Ignore the sign (- does not count as a digit)

- Use a function to do the counting

- Allow multiple numbers in one program run

- Define an abort condition (Abbruchkriterium)

## What is required to program
- Do you understand functions

- Do you understand loops

- Do you know how numbers work internally (division by 10)

- Can you structure a program cleanly

### Memorize 
#### Pattern for "Count digits of an integer"
- Every division by 10 removes one digit

- Count how many times you can divide until the number becomes 0
  
##### Main logic to solve

- Start a counter at 0

- If number is negative → make it positive

- Do at least one division

- After each division → increase counter

- Stop when number becomes 0

- Return counter

#### Function pattern (memorize)

“Digit problems → divide by 10 → do-while” 
##### Input normalization
- You just adapt it so the algorithm can work correctly
- Example: Make negative → positive
- What’s happening here?

- Negative integers are allowed

- But the algorithm counts digits

- The sign (-) is not a digit

- So we normalize:

 -123 → 123
 
 ````
if (z < 0) z = -z;
````
- Without normalization:
  
```
-123 / 10 = -12
-12 / 10 = -1
-1 / 10 = 0

```

##### Loop termination condition
- use while loop
- This condition controls when the algorithm terminates.
  
#### Input validation
- Reject if user enters any wrong input
- Repeat until correct input
````
do
{
    printf("Geben Sie eine ganze Zahl ein: ");
    r = scanf("%d", &zahl);
    INCLR
}
while (r < 1);

````
#### Output pattern 
Always show:

- the input

- the result

- formatted sentence
````
printf("Die Zahl %d hat %d Stelle(n).", zahl, stellen(zahl));

````
*Examiners look for:*

function call ✔

correct format specifiers ✔

#### Pattern for “repeat program (j/n)” (Memorize)
1. Ask the question

2. Read a character

3. Accept only j/J/n/N

4. Repeat program if j or J

- Accept only j/J/n/N
````
do
{
    printf("Soll eine weitere Zahl untersucht werden (j/n)? ");
    scanf("%c", &weiter);
    INCLR
}
while (weiter!='j' && weiter!='J' && weiter!='n' && weiter!='N');

````
- main loop 
````
while (weiter == 'j' || weiter == 'J');

````
## Programm

```
/* Aufgabe 4-3
   Bestimmung der Stellenanzahl einer ganzen Zahl */

#include <stdlib.h>
#include <stdio.h>
#include "Diverses.h"

int stellen(int z)
{
  int anz=0; /*Count = 0*/
  /*Input normalization*/
  if (z<0)
    z=-z

  /*Correctly handles z == 0*/
  do {
    z = z / 10;
    anz++;
  } while (z != 0); /*Loop termination*/

  return anz;
}

int main(void)
{
  short anz; /*short range. On most sytems int has max 10 digits*/
  int r, zahl; /*input: zahl*/
  char weiter;

  /* Wiederholungsschleife */
  do
  {
    /* Eingabe der Zahl */
    do
    {
	  printf("\nGeben Sie eine ganze Zahl ein: "); 
	  r=scanf("%d",&zahl); INCLR
    }
    while (r<1);
    /* Ausgabe des Ergebnisses */
    /*Ausgabe mit Funktionsaufruf stellen(zahl)
     - input, the result

     */
	printf("\nDie Zahl %d hat %d Stelle(n).", zahl, stellen(zahl)); //

    /* Abfrage, ob eine Wiederholung gewuenscht ist */
    printf("\n");
    do
    {
      printf("\nSoll eine weitere Zahl untersucht werden (j/n) ? ");
      scanf("%c",&weiter); INCLR
    }
    while (weiter!='J' && weiter!='j' && weiter!='N' && weiter!='n');
  }
  while (weiter=='j' || weiter=='J');
  PAUSE
}




```

