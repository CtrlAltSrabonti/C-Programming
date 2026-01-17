# Eindimensionalen Feldern / Array
```
/*Ein und Ausgabe einer Folge von 30 Zahlen und Suche nach der kleinsten und der groessten Zahl*/

#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"

#define MAX_ANZAHL 30  //Feldgröße nur an einer Stelle

int main(void){
    int i, anzahl, r, zl; // zl = Zählvariable
    float min, max, folge[30];
    char weiter;
    /*Without char weiter Program runs only once.
    In program is user allowed to process another sequesnce of numbers or stop now?

    */
    /*Wiederholungsschleife*/
    /*In einem programmslauf meherere Zahlenfolgen nacheinander eingegeben wird*/
    do{
        /*Eingabe der Anzahl von Zahlen*/
        do{
            printf("\nWieviele Zahlen sind maximal zu erwarten (maximal %d): ", MAX_ANZAHL);
            r = scanf("%d", &anzahl); INCLR
        } while (r < 1 || anzahl > MAX_ANZAHL); // Loop repeats if user inputs invalid number = 0 or number is greater than the allowed maximum

        /*Eingabe der Zahlen*/
        for(i= 0; i<anzahl; i++) {
            do{
                printf("\n%d. zahl?\n", i+1);
                r= scanf("\n%f", &folge[i]); INCLR
            }while (r < 1); // Loop repeats if user inputs invalid number
        }

        /*Ermittlung der kleinsten und der groessten Zahl*/
        // Initialization
        min=folge[0];
        max=folge[0];

        // Vergleich jeweiligen Zahl und update
        for(i=1; i<anzahl; i=i+1){
            if (folge[i] <min) min=folge[i];
            if (folge[i] >max) max=folge[i];
        }
        // Ausgabe in umgekehrte Reihenfolge
        // zl counts how many numbers have been printed
        for(zl = 0, i= anzahl - 1; i >= 0; i=i-1) {
            printf("%15f", folge[i]);
            zl++; // zl increases by 1
            if (zl%5 == 0)
                printf("\n");

        }

        printf("\n\nDie kleinste Zahl ist %f",min);
        printf("\n\nDie groesste Zahl ist %f",max);

        /*Wiederholungsabfrage*/
        printf("\nSoll noch eine Zahlenfolge untersucht werden? ");
        scanf("%c",&weiter); INCLR

    } while (weiter == 'j' || weiter == 'J'); // condition is true -> Program repeats, while condition is false -> Program ends

    return 0;

}


```
## Why it is a one-dimensional array
- folge is an array of 30 floating-point numbers

- It has only one index (folge[i])

- Therefore, it is one-dimensional
## What does the while condition mean?
```
while (r < 1 || anzahl > MAX_ANZAHL);

```
“Repeat the loop while
- the input was not a valid integer
OR
– the number is greater than the allowed maximum”
## Why is INCLR logically needed here?

### What happens WITHOUT INCLR?

If the user enters:
```
abc⏎

```
- scanf("%d", &anzahl) fails

- r = 0

- BUT the characters a b c \n remain in the input buffer

> Next loop iteration:

- scanf sees the same a again

- fails again

- ❌ infinite loop
## Case: VALID input
*User types:*
```
12⏎
```
*What is actually in the input buffer:*
```
'1'  '2'  '\n'

```
1. scanf runs
```
r = scanf("%d", &anzahl);

```
*What happens:*

- scanf reads '1' and '2'

- Converts them to integer 12

- Stores it in anzahl

- Returns 1 → success
2. INCLR runs
  ```
  INCLR   →   while (getchar() != '\n');

  ```
*Execution:*

- getchar() reads '\n'

- Condition fails immediately

- Loop ends

✔ Only one character is removed
✔ Buffer is now empty
| Input    | What INCLR removes |
| -------- | ------------------ |
| `12⏎`    | just `'\n'`        |
| `abc⏎`   | `'a' 'b' 'c' '\n'` |
| `12abc⏎` | `'a' 'b' 'c' '\n'` |
3. Why INCLR is placed right after scanf?
```
r = scanf("%d", &anzahl); INCLR
```
Logical sequence:

1️⃣ Try to read input
2️⃣ Check if it worked (r)
3️⃣ Clean the buffer no matter what
```
for (i = 0; i < anzahl; i++)
{
    do
    {
        printf("%d. Zahl? ", i + 1); 
        r = scanf("%f", &folge[i]); INCLR
    }
    while (r < 1);
}
```
### The OUTER loop (for)
*Purpose:*

- Runs once per number

- Controls which array element is being filled
*Iteration meaning:*
<img width="819" height="317" alt="image" src="https://github.com/user-attachments/assets/1ff5bc72-46cc-40cf-9ed1-95faa4d9e256" />

### The INNER loop (do–while)
```
do
{
    ...
}
while (r < 1);

```
**Purpose:**

- Ensures the user enters a valid floating-point number

- Repeats the question until scanf succeeds
### What happens inside the inner loop
#### Ask for input
```
printf("%d. Zahl? ", i + 1);
```
##### Why i + 1 is used?
*What is i?*

In the loop:
```
for (i = 0; i < anzahl; i++)

```
i takes the values:
```
0, 1, 2, ...

```
But humans normally count from 1, not 0.
So instead of showing:
```
0. Zahl?

```
the program prints:
```
i + 1

```
Which produces:
```
1. Zahl?
2. Zahl?
3. Zahl?

```
#### Try to read a float
```
r = scanf("%f", &folge[i]);

```
*scanf returns:*

- 1 → valid float entered

- 0 → invalid input (e.g. letters)
#### Clear input buffer
```
INCLR

```
- Removes leftover characters

- Prevents infinite loops
#### Check loop condition
```
while (r < 1);

```
- If input was invalid → repeat

- If input was valid → exit inner loop
### Find the smallest (min) and largest (max) number in the array folge.
#### Initialization (very important)
- The first element of the array is taken as a starting reference
#### Loop through the remaining elements
- Start at i = 1 because:

folge[0] is already used
#### Compare each number
Check for a new minimum
```
if (folge[i] < min)
    min = folge[i];

```
- If the current number is smaller than the current minimum

- Update min
#### Check for a new maximum
```
if (folge[i] > max)
    max = folge[i];
```
### Die eingegebenen Zahlen sind in umgekehrter Reihenfolge
- zl counts how many numbers have already been printed.
##### Initialization
```
zl = 0;
i = anzahl - 1;

```
- i → array index (goes backwards)

- zl → counts printed numbers
##### Print a number
```
printf("%15f", folge[i]);
zl++;

```
- Prints folge[i]

- %15f means:

- print a float

- right-aligned

- width = 15 characters
- <img width="819" height="317" alt="image" src="https://github.com/user-attachments/assets/0da44b28-7b39-4a83-9728-ceb46b881d3b" />

##### Line break after every 5 numbers
```
if ((zl % 5) == 0)
    printf("\n");
```
- after 5 numbers → new line

- after 10 numbers → new line

- after 15 numbers → new line
### Wiederholungsabfrage
```
scanf("%c", &weiter);
```
- “Read exactly one character from the input buffer and store it in char weiter.”
