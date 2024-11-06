#include <stdio.h>

int main() {
    int tage, wochen, restTage;

    // Benutzeraufforderung zur Eingabe der Tage
    printf("Geben Sie die Anzahl der Tage ein: ");
    scanf("%d", &tage);

    // Berechnung der Wochen und der verbleibenden Tage
    wochen = tage / 7;
    restTage = tage % 7;

    // Ausgabe der Ergebnisse
    printf("%d Tage sind %d Wochen und %d Tage\n", tage, wochen, restTage);

    return 0;
}
