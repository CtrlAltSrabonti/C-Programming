#include <stdio.h>
int main() {
double zahl;
printf("Bitte eine Fliesskommazahl eingeben: ");//Verwenden von %lf für double und Hinzufügen des Adressoperators &
scanf("%lf", zahl);
printf("Ihre Zahl lautet %lf\n",zahl);//
Verwenden von %lf für die Ausgabe von double
return(0);
}