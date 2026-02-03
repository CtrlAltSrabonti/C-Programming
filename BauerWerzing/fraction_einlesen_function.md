- This function reads a fraction from the user (sign, numerator, denominator),
-  validates the input, shortens the fraction,
-  and prints both the original and the reduced fraction.
## Inputs (via pointers)
```
void brucheinlesen(short *s, unsigned int *z, unsigned int *n)
```
#### Why pointers?

👉 Because the function must change values outside the function. Pointers → function modifies caller’s variables

```
/*- Einlesen eines Bruches: Vorzeichen, Zaehler, Nenner
 - brucheinlesen function pass by reference, because input / change values
*/


void brucheinlesen ( short *s, unsigned int *z, unsigned int *n) {

    // Local variables
    char vz;
    int r;
    unsigned long long zl, nl; /*Copies for safe reduction*/

    // Sign Input
    do {

        printf("Vorzeichen (+/-): ");
        r = getchar(); INCLR // getchar() read ONE CHARACTER

    } while (vz != '+' && vz != '-');

    // Convert sign into number
    if (vz == '+') *s= +1;
    else (vz == '-') *s= -1;

    // Read numerator

    do{
        printf("Zaehler (>=0): ");
        r = scanf("%u", z); INCLR /*ACHTUNG: scanf needs an address, and z is the address because z is already a pointer*/

    } while (r < 1); // Input validation means scanf failure if user typed letters

    // Read denominator
    do {
        printf("Nenner (>0): ");
        r= scanf("%u", n); INCLR
    } while (r <1 || *n == 0); // Denominator check != 0

    // Output original fraction
    bruchausgabe ("Der Bruch ist : ", *s, *z, *n); // Pointers are dereferenced

    // Fraction reduction
    /*kuerze() works on modifiable values*/
    zl = *z; // Copy -> modidy -> Right back
    nl = *n;
    /*If a function parameter is a pointer, you must pass an address. kuerze() modifies its parameters, therefore their address must be passed using the address of operator &*/
    kuerze(&zl, &nl); // kuerze changes numerator and denominator. It needs their address to chnage values - and &zl address of zl

    //Copy -> modidy -> Right back
    *z = zl, *n = nl;

    // Output reduced fraction
    bruchausgabe("\nDer gekuerzte Bruch ist: ", *s, *z, *n);

}


```
