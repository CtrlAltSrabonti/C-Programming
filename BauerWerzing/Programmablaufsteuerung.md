# do....while loop
## How it works (very important)
- The loop body runs first

- THEN the condition is checked

- If condition is true → repeat

- If condition is false → stop

👉 The loop body runs at least once, no matter what.
```
int zahl;

do {
    printf("Enter positive number: ");
    scanf("%d", &zahl);
} while (zahl <= 0);

```
Repeat something until the user says stop:
```
char weiter;

do {
    // program logic
    printf("Again? (j/n) ");
    scanf(" %c", &weiter);
} while (weiter == 'j' || weiter == 'J');

```
# While loop
```
while (condition) {
    // loop body
}
```
- Condition is checked first

- If false → loop body is skipped

- If true → loop body runs

- Then condition is checked again

👉 The loop body may run zero times.
```
int zahl;

printf("Enter positive number: ");
scanf("%d", &zahl);

while (zahl <= 0) {
    printf("Invalid input!\n");
    printf("Enter positive number: ");
    scanf("%d", &zahl);
}
```
# for loop
```
for (initialization; condition; change) {
    // loop body
}
```
- How a for loop runs

- Initialization runs once

- Condition is checked

- If false → stop

- If true → run loop body

- Change happens

- Go back to condition

👉 Just like while, the condition is checked before the loop body


