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
