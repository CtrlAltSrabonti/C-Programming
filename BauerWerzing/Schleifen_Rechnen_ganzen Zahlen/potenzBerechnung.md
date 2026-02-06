# Potenzberechnung

<img width="807" height="238" alt="image" src="https://github.com/user-attachments/assets/64ff72c3-d45b-405c-a229-dbd557391f71" />
# Program
## Fußgesteuerte Schleife (do....while)

```
/*Berechnung der n-te Potenz einer ganzen Zahl*/
#include <stdlib.h>
#include <stdio.h>


int main(void)
{

    int i, basis, exp, ergebnis;

    /*Eingabe von User aufforderung*/
    printf("\nGeben Sie Basis und Exponenten ein: \n");
    printf("Basis:  \n"); scanf("%d",&basis);
    printf("Exponenten:  \n"); scanf("%d",&exp);

    /*Bei der Eingabe sicherstellen, der Exponent n nicht negativ ist*/
    /*Input validation: Checking user input and forcing it to meet given conditions*/
    /*Repeats input until it is valid*/

    while (exp < 0)
    { /*Vorteil while schleife: Die bedingung wird vor jedem Durchlauf geprüftfra*/

        printf("Exponent darf nicht negativ sein!\nExponent: ");
        scanf("%d",&exp);
    }

    /*Ablauf der Berechnung*/
    /*For do... while loop if condition check is extra, because do....while loop runs minimum onetime*/
    if (exp == 0) ergebnis = 1; /*Mathematisch b⁰ = 1*/
        else // exp > 0
        {
            /*Initialisation*/
            ergebnis = 1;
            i = 0;

            do
            {
                ergebnis = ergebnis * basis; /*Memorise such algorithms*/
                i = i+1;
            } while (i < exp); /*Abbruchsbedingung*/
        }

        /*Ausgabe*/
        printf("\n%d°%d = %d\n\n",basis, exp, ergebnis);

        return 0;

}



``
