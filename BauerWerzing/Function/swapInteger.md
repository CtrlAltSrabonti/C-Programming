## Swap integer
- The goal is *NOT*
  1. to compute a number
  2. to produce a new value
- The goal *IS*
  1. To change existing variables in the caller
*IMPORTANT*
- If a function's purpose is to modify existing variables, it should usually return 'void'
  1. swap
  2. modify
  3. update
- If its purpose is to compute a value, it should return that value
  
## Simple walkthrough How call by value and call by reference works
- x and y as two boxes in my room (main function)
- Their values as what's inside the boxes

### 1.Version 1:
- Box A has 5, Box B has 6
You write down the numbers on paper and swap the numbers on paper.
--- Your boxes at home stay the same

### 2. Version 2:
Because the function receives the addresses of (main's) x and y, it can change the values stored inside the boxes


## Program
```
/*Verschiedene Versionen der Funktion swapInteger*/

#include <stdio.h>
#include <stdlib.h>
#include "Diverses.h"


/*Version 1: geht nicht, da a und b lokale variable der Funktion swapInteger sind
 - Because only copies of the integers are passed; changes do not affect the original variables
 - You can swap a nd b all day _ x and y won't notice'

 */

void swapInteger1 (int a, int b) {

    int dummy = a;
    a = b;
    b = dummy;

    printf("swapInteger version1.....\n");
    return;
}

/*Version 2: funktioniert,da die Zeiger a und b auf Speicherort zeigen,

 main ():        swapInteger():

 x = 5            a ---> x
 y = 6            b ---> y

 - The values in memory are changed
*/

void swapInteger2 (int *a, int *b) {
    int dummy = *a;
    *a = *b;
    *b = dummy;

    printf("swapInteger version2.....\n");
    return;
}

/*Version 3: funktioniert auch, allerdings werden hier die Zeiger pa und pb verändert, der Speicherinhalt bleibt gleich
- int x = 5;  int *pa = &x;
- int y = 10; int *pb = &b

- pa ---> x(5)
- pb ---> y(10)

After swapInteger()

- pa --> y (10)
- pb --> x (5)
 */
void swapInteger3 (int **a, int **b) {
    int *pdummy = *a;
    *a = *b;
    *b = pdummy;
    printf("swapInteger version3.....\n");
    return;
}

// In Main function the proof happens

int main(void) {

    /*The initial set up*/
int x = 5;
int *px =&x;

int y = 10;
int *py = &y;

// Direct variables

printf("\nWer von x: %d und Wert von y: %d\n", x,y);
swapInteger1(x,y);
printf("\n Wert von x: %d und wert von y; %d\n", x, y);

/*After function calling, i am not passing the function the values 5 and 10
- We are passing in the function
1. Where x lives
2. Where y lives

*/

// Dereferenced pointers
x = 5; y= 10;

printf("\nWer von x: %d und Wert von y: %d\n", x,y);
swapInteger2(&x, &y);
printf("\n Wert von x : %d und Wert von y: %d (erhalten durch derenzierung)\n", x. y);

x= 5; y = 10;

// Dereferenced pointers
x =5; y =10;

printf("\nWert von x: %d und Wert von y: %d\n", x,y);
swapInteger3(&px, &py);
printf("\n Wert ")
printf("\nWert von x: %d und Wert von y: %d (erhalten durch dereferenzierung)\n", *px, *py);


return 0;


}

````
