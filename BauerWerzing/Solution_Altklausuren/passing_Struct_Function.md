
### General template passing struct to function

````
#include <stdio.h>
#include <stdlib.h>

/* =========================
   1. STRUCT DEFINITION
   ========================= */

struct MyStruct {
    double x;
    double y;
};

/* =========================
   2. FUNCTION DECLARATIONS
   ========================= */

/* Call by VALUE */
void print_by_value(struct MyStruct s);

/* Call by REFERENCE */
void print_by_reference(const struct MyStruct *s);

/* User input helper */
void read_from_user(struct MyStruct *s);

/* =========================
   3. FUNCTION DEFINITIONS
   ========================= */

void print_by_value(struct MyStruct s)
{
    printf("\n[Call by VALUE]\n");
    printf("x = %lf\n", s.x);
    printf("y = %lf\n", s.y);
}

void print_by_reference(const struct MyStruct *s)
{
    printf("\n[Call by REFERENCE]\n");
    printf("x = %lf\n", s->x);
    printf("y = %lf\n", s->y);
}

void read_from_user(struct MyStruct *s)
{
    int r;

    do {
        printf("Enter x: ");
        r = scanf("%lf", &s->x);
        while (getchar() != '\n');   /* clear input buffer */
    } while (r != 1);

    do {
        printf("Enter y: ");
        r = scanf("%lf", &s->y);
        while (getchar() != '\n');
    } while (r != 1);
}

/* =========================
   4. MAIN (TEST DRIVER)
   ========================= */

int main(void)
{
    struct MyStruct obj;

    /* Ask user for input */
    read_from_user(&obj);

    /* Test both calls */
    print_by_value(obj);      /* call by value */
    print_by_reference(&obj); /* call by reference */

    return 0;
}




````
