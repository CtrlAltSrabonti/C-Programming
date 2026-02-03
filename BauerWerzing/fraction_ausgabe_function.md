/*Ausgabe eines Bruches: Vorzeichen, Zaehler, Nenner*/
- char *t : Because strings in C are arrays of characters and are passed to functions as pointers. Text to print before the fraction
- short vz: sign print separately
- unsigned int z: numerator (>=0)
- unsigned int n: denominator (>0)

*/
 # Program
```
void bruchausgabe (char *t, short vz, unsigned int z, unsigned int n)  {

    print("%s", t); // print text before the fraction
    if(z == 0) printf("0"); // if numerator = 0, fraction = 0
    else             // when numerator != 0
    {
        if (vz> 0) printf("+"); else printf("-");
        printf("%u / %u", z, n);
    }
}
```
