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

Jede for-Schleife könnte auch als while-Schleife realisiert werden. Der Vorteil der for-Schleife liegt darin, dass alle Angaben zum Ablauf der Schleife kompakt und übersichtlich in den runden Klammern nach for stehen. 
Als einfaches Beispiel soll die Berechnung der Summe der Quadrate der ersten N natürlichen Zahlen sowohl als while-Schleife als auch als for-Schleife realisiert werden: 
```
int N, k, summe; 
printf("N=? "); scanf("%d",&N); 
k = 1; 
summe = 0; 
while (k<=N) 
{ 
  summe = summe + k*k; 
  k = k + 1; 
} 
printf("\nSumme = %d\n\n",summe); 
```
```
int N, k, summe; 
printf("N=? "); scanf("%d",&N); for (k=1, summe=0; k<=N; k++) 
{ 
  summe = summe + k*k; 
} 
printf("\nSumme = %d\n\n",summe); 
```
## controlled exit from loops
### continue

- Stops current iteration

- Goes to next loop cycle
```
  for (int i = 1; i <= 5; i++) {
    if (i == 3)
        continue;
    printf("%d ", i);
}
```
Output: 1245
### break
- Stops the loop completely
```
for (int i = 1; i <= 5; i++) {
    if (i == 3)
        break;
    printf("%d ", i);
}

```
Output: 12
