- This function reads a fraction from the user (sign, numerator, denominator),
-  validates the input, shortens the fraction,
-  and prints both the original and the reduced fraction.
## Inputs (via pointers)
```
void brucheinlesen(short *s, unsigned int *z, unsigned int *n)
```
#### Why pointers?

👉 Because the function must change values outside the function.
