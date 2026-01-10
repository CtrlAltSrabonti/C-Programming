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
