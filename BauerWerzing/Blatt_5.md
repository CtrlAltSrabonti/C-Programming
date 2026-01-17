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


