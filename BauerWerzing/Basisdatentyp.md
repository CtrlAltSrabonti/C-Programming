## 1. Das Grundproblem: Eingabepuffer in C

In C werden Tastatureingaben zeilenweise verarbeitet.
Das bedeutet:

Der Benutzer tippt etwas ein

Er bestätigt mit der Return-Taste

Alles, inklusive des Return-Zeichens, landet im Eingabepuffer

👉 Die Return-Taste entspricht dem ASCII-Code 10 ('\n' oder \12).

```
Eingabe:  A⏎
Puffer:   'A'  '\n'
```
Wenn dein Programm nur das Zeichen 'A' liest, bleibt '\n' im Puffer zurück.
Das führt oft zu Problemen bei der nächsten Eingabe.

## 2. scanf("%c") vs. getchar()
scanf("%c", &c)

Liest genau ein Zeichen

Ignoriert den restlichen Puffer nicht

Problem: Das '\n' bleibt oft übrig

getchar()

Liest immer genau ein Zeichen

Gibt den ASCII-Code als int zurück

Sehr gut geeignet, um den Puffer gezielt zu leeren

## 3. Die Idee: Eingabepuffer leeren

Da jede Eingabe mit Return ('\n') endet, kann man:

So lange Zeichen lesen, bis das Newline-Zeichen gefunden wird
```
while (getchar() != '\n');

```
```
for (; getchar() != (char)10; );
```
Erklärung:

getchar() liest Zeichen für Zeichen

Die Schleife läuft, bis ASCII 10 ('\n') gefunden wird

Danach ist der Eingabepuffer leer
## 4. Das Makro INCLR
Damit man diesen Code nicht jedes Mal neu schreiben muss, definiert man ein Makro:
```
#define INCLR while (getchar()!='\12');
```
\12 ist die oktale Schreibweise für ASCII 10
```
scanf("%c", &c);
INCLR;
```
### Was ist der Eingabepuffer?

Die Tastatur liefert nicht sofort Zeichen an dein Programm

Alles, was der Benutzer tippt, wird zuerst im Eingabepuffer gesammelt

Erst wenn Return (Enter) gedrückt wird, wird die ganze Zeile an das Programm übergeben
#### Fall 1: Eingabepuffer ist LEER
Zustand vor getchar():
```
Eingabepuffer: leer

```
##### Was passiert?

- getchar() wird aufgerufen

- Es gibt kein Zeichen im Puffer

👉 Das Programm bleibt stehen und wartet

- Benutzer drückt Return

- Return erzeugt das Zeichen '\n'

- Dieses Zeichen landet im Eingabepuffer

- getchar() liest dieses Zeichen

- Programm läuft weiter → Ende

#### Fall 2: Eingabepuffer ist NICHT leer (typischer Fehlerfall)
```
scanf("%d", &x);
```
Der Benutzer gibt ein:
```
123⏎

```
Puffer danach:
```
'1' '2' '3' '\n'
```
scanf("%d", &x); liest:
```
'1' '2' '3'
```
👉 '\n' bleibt im Puffer!
Jetzt kommt:
```
getchar();

```
##### Was passiert jetzt?

- getchar() liest sofort das '\n'

- Es wird nicht gewartet

- Programm endet sofort

- Benutzer sieht das Programm „blitzartig“ verschwinden
  
## What enum does (in simple terms)

- enum lets you:

- Give names to integer values

- Make code more readable

- Restrict variables to a small, meaningful set of values

- Instead of using “magic numbers” like 0, 1, 2, you use names like RED, GREEN, BLUE.
```
enum color { RED, GREEN, BLUE };
```
Using an enum variable
```
enum color c;

c = RED;

```
- c can logically hold only RED, GREEN, or BLUE

- Internally, c is stored as an int
With typedef (common and cleaner)
```
typedef enum { RED, GREEN, BLUE } color;

color c = GREEN;

```
Now you don’t need to write enum color every time.

### enum and typedef
typedef enum { rot, blau, grau, schwarz } farbe;


This defines an enumeration with four symbolic constants:
```
rot = 0

blau = 1

grau = 2

schwarz = 3
```
typedef creates a new type name farbe, so you can write:

farbe f, g, h;

instead of enum farbe.

Equivalent (commented-out) version:
```
enum farbe { rot, blau, grau, schwarz };
enum farbe f, g, h;
```
### 2. Memory size of an enum
```
printf("%u", sizeof(farbe));
```

> Output:

4

On this system, an enum occupies 4 bytes, because it is stored as an int.

This is implementation-dependent, but very common.

### 3. Printing enum constants
printf("\n%hu %hu %hu %hu", rot, blau, grau, schwarz);

> Output:

0 1 2 3


- Enum constants are just integers starting from 0 by default.

- %hu works here because the values are small integers.

### 4. Assigning and printing enum variables
```
f = grau;
g = blau;
h = g;
printf("\n%hu %hu %hu", f, g, h);
```

> Output:

2 1 1

>
f = grau → 2

g = blau → 1

h = g → also 1
>
Enum variables behave like integers with restricted symbolic values.

#### 5. Logical expressions with enums
```
x = (f > g);
y = (f > schwarz);
printf("\n%d %d", x, y);
```

> Output:

1 0


- Explanation:

f > g → 2 > 1 → true → 1

f > schwarz → 2 > 3 → false → 0

Enums can be compared just like integers.

### 6. Type conversion: enum → int
```
i = rot;
j = g;
printf("\n%d %d", i, j);
```

> Output:

0 1


- Assigning an enum value to an int is implicit and allowed

rot becomes 0, g is 1

### 7. Type conversion: int → enum
```
g = 3;
h = 4;
printf("\n%hu %hu", g, h);
```

> Output:

3 4


⚠️ Important:

C does not check whether an integer assigned to an enum is valid.

g = 3 → valid (schwarz)

h = 4 → invalid logically, but still stored

This can lead to undefined or unsafe logic, even though it compiles.

### 8. Arithmetic with enums
```
g = f - 1;
h = f + 1;
printf("\n%hu %hu %hu", f, g, h);
```

> Output:

2 1 3

>
f = 2

g = 2 - 1 = 1

h = 2 + 1 = 3
>
Enums fully support arithmetic because they are integers underneath.

### 9. Compound assignment
```
h = f += g;
printf("\n%hu %hu %hu", f, g, h);
```
> Output:

2 1 3
