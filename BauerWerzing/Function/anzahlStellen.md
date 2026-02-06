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
