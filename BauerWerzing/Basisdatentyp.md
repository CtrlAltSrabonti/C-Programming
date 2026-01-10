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
