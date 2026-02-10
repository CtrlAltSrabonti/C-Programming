````
#include <stdlib.h>
#include <stdio.h>

struct komplexeZahlen {


    double real;
    double imaginaer;
};

void lese_komplexezahlen (struct komplexeZahlen *z) {

    int r;

    do {
   printf("Realteil : ");
   r=scanf("%lf", &z->real);
   getchar();} while(r<1);

    do {
   printf("ImaginÃ¤rteil : ");
   r=scanf("%lf", &z->imaginaer);
   getchar();} while(r<1);

}

struct komplexeZahlen addierekomplexezahlen (struct komplexeZahlen *z1, struct komplexeZahlen *z2) {

    struct komplexeZahlen summeerg;

    summeerg.real= z1->real + z2->real;
    summeerg.imaginaer=z1->imaginaer+z2->imaginaer;

    return summeerg;
}

struct komplexeZahlen subtrahierekomplexezahlen(struct komplexeZahlen *z1, struct komplexeZahlen *z2) {

   struct komplexeZahlen differg;

    differg.real= z1->real - z2->real;
    differg.imaginaer=z1->imaginaer - z2->imaginaer;

    return differg;
}
void druckekomplexezahl(struct komplexeZahlen *z) {

    if (z->imaginaer < 0) {
    printf("z=%.2f - (%.2f)i \n", z->real, z->imaginaer); }
    else {printf("z=%.2f + %.2fi \n", z->real, z->imaginaer); }

}

int main()
{
    struct komplexeZahlen z1, z2, summe, differenz;

    printf("1. Komplexe Zahl ist: \n");
    lese_komplexezahlen(&z1);

    printf("2. Komplexe  Zahl ist: \n");
    lese_komplexezahlen(&z2);

  summe= addierekomplexezahlen(&z1, &z2);

  printf("\nDie Summe ist: \n");
  druckekomplexezahl(&summe);

  differenz= subtrahierekomplexezahlen(&z1, &z2);

  printf("Die Differenz ist: \n");
  druckekomplexezahl(&differenz);


  return 0;
}


````
