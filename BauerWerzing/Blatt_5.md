# Eindimensionalen Feldern / Array
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
