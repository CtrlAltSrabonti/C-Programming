<img width="1056" height="586" alt="image" src="https://github.com/user-attachments/assets/0ad06da8-0625-4c5a-a0c7-e2aca17c4a44" />
<img width="1057" height="363" alt="image" src="https://github.com/user-attachments/assets/338c9887-ad96-48dc-b03a-ce114715786f" />

# Program
```
/*Berechnung des ggT (größster gemeinsamer Teiler) zweier ganzer Zahlen (a und b)
 - Pass by value: The function receives copies of the arguments, not the original variables
 - Pass by value: The original values in main() stay unchanged
- Iterative approach without Function calling

 */
unsigned long long ggt(unsigned long long a, unsigned long long b) { // unsigned long long (large integer range)

    unsigned long long q, r;
    while(a != b) { // when a==b, that value is the ggT, as long as the two different numbers are different, we reduce the larger one
        if (a >b) {

            r = a % b; // Always reduce the larger value e.g: a (24) % b (3) b divides a exactly
            if (r == NULL) return b;
            q = a/b;
            a = a - q*b   // The larger number is reduced by subtracting a multiple of the smaller number

        }
        else{
            r = b % a;
            if(r == NULL) return a;
            q = b/a;
            b = b - q* a;
        }


    }
    return a; // The value is the ggT. loop exists when a==b


}

```
