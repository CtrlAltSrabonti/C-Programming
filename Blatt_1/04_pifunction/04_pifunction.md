# Header Datei
The math.h header also provides a set of predefined constants/ macros
*Example:*
M_PI = π
## Höhere Präsision
float hat typischerweise eine Genauigkeit von etwa 6-7 Dezimalstellen, während double etwa 15-16 Dezimalstellen darstellen kann. Bei der Berechnung des Volumens eines Zylinders kann dies wichtig sein, um präzisere Ergebnisse zu erhalten.
´´´
#include<stdio.h>
#define _Use_MATH_DEFINES //
#include<math.h>
int main(){
   double radius, hoehe, volumen;

   // Eingabeaufforderung für Radius und Hoehe
   printf("Geben Sie den Radius des Zylinders ein: ");
   scanf("%lf", &radius);
   printf("Geben Sie die Hoehe des Zylinders ein: ");
   scanf("%lf", &hoehe);

   // Volumenberechnung
   volumen = M_PI * radius * radius * hoehe;

   // Ausgabe des Ergebnisses mit 3 Nachkommastellen
   printf("Das Volumen des Zylinders betr#gt: %.3f\n", volumen);
   
return 0;
}
´´´
