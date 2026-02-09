# Passing structure to function

<img width="1003" height="414" alt="image" src="https://github.com/user-attachments/assets/49c07023-583e-42af-a777-02d8a2d44fb0" />

<img width="1006" height="487" alt="image" src="https://github.com/user-attachments/assets/efdc69ff-f889-4eab-9787-6f2148159d19" />

<img width="990" height="297" alt="image" src="https://github.com/user-attachments/assets/7687bc52-368c-460d-a395-f25e3519b477" />

<img width="1029" height="533" alt="image" src="https://github.com/user-attachments/assets/5fd8759d-e68a-4433-b2e0-f5ac7de1c0e9" />

<img width="1018" height="606" alt="image" src="https://github.com/user-attachments/assets/6717f7b9-f586-43ea-894a-69f8d4232847" />

## Program

```
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

// struct definition
struct Complex
{
    double real;     // Realteil
    double imaginary; // Imaginärteil
};

// Function declaration
void ausgabeKomplex (struct Complex c); // Translation of the math (x = real + i. imaginary)
double berechnenDiskriminant(double a, double b, double c);
void berechnenQuadratischeGleichung (double a, double b, double c);

// Funktion definieren

void ausgabeKomplex (struct Complex c)

/*Funktion zum Ausgeben komplexe zahlen*/
{
    printf("%.2f + %.2fi\n", c.real, c. imaginary); // Nothing return, this function will only print
}

/*Funktion zum Berechnen der Diskriminante einer quadratische quadratische Gleichung*/
/*Berechnen Diskriminante*/
double berechnenDiskriminant (double a, double b, double c)
{
    return b * b - 4 * a *c;

}

/*Funktion zum lösen einer quadrstischen Gleichung*/

void berechnenQuadratischeGleichung (double a, double b, double c)
{
    // Initialisiere komplexe Zahlen für die Loesungen
    struct Complex root1, root2; // root1 und root2 initialised for solution

    // Berechne die Diskriminante
    double D = berechnenDiskriminant (a, b, c);

    if (D > 0)
    {
        /* zwei reale Loesungen*/
        root1.real = (-b + sqrt(D)) / (2 *a);
        root2.real = (-b - sqrt(D)) / (2*a);

        root1.imaginary = 0.0;
        root2.imaginary = 0.0;
    }

    else if (D == 0)
    {
        /*Eine reale Lösung*/

        root1.real = -b / (2 * a);
        root2.real = -b / (2 * a);

        root1.imaginary = 0.0;
        root2.imaginary = 0.0;
    }

    else
    {
        /*zwei komplexe Loesungen*/
        root1.real = -b / (2* a),
        root2.real = -b / (2*a);

        root1.imaginary = sqrt(fabs(D)) / (2 *a);
        root2.imaginary = -sqrt(fabs(D)) / (2 * a);
    }

    // Gibe die Loesungen ausgabeKomplex
    printf("Lösung 1:  \n");
    ausgabeKomplex (root1);
    printf("Lösung 2: \n");
    ausgabeKomplex (root2);
}



int main(void)
{

    double a, b, c;
    // Auffordern Benutzer fuer a, b und c
    printf("\nGeben Sie Koeffizienten a,b und c ein: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Loese die Quadratische Gleichung mit Funktionsaufruf
    berechnenQuadratischeGleichung (a, b, c);


    return 0;

}





```
