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
```
while (condition) {
    // loop body
}
```
