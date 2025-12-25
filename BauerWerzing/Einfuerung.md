```
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
 float kapital, zinssatz, zinsen;
 int anz_tage;
 
 /* Eingaben */
 printf("Zu verzinsendes Kapital in Euro? ");
 scanf("%f",&kapital);
 
 printf("Anzahl der Tage? ");
 scanf("%d",&anz_tage);
 
 printf("Zinssatz in Prozent? ");
 scanf("%f",&zinssatz);

 /* Berechnung der Zinsen */
 zinsen = kapital*zinssatz*anz_tage/(100*360);
 
 /* Ausgabe des Zinsbetrags */
 printf("\nAnfallende Zinsen: %f Euro\n\n",zinsen);
  
 system("PAUSE");
}

```

