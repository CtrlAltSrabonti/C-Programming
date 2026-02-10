```
/* 6-6-1-max-und-moritz.c
   Beispielprogramm fuer den Zugriff auf die Attribute einer Struktur  */

#include <stdlib.h>
#include <stdio.h>
#include "Diverses.h"

int main(void){

	typedef struct adresse {
		char strasse[20];
		unsigned int nr;
		unsigned int plz;
		char stadt[20];
	}Adresse;

	typedef struct person {
		char name[20];
		unsigned int alter;
		struct adresse wohnsitz;
	} Person;

	Person max={"Max",3,{"Buschstr.", 1, 1000, "Irgendwo"}};
	Person moritz;
    Person *pers_ptr = &moritz;

	strcpy(moritz.name,"Moritz");
	moritz.alter=3;
	strcpy(moritz.wohnsitz.strasse,"Buschstr.");
    
	pers_ptr->wohnsitz.nr = 1;
	pers_ptr->wohnsitz.plz=1000;
	strcpy(moritz.wohnsitz.stadt,"Irgendwo");


	if (pers_ptr->alter == max.alter) 
		printf("%s und %s sind gleich alt!\n", pers_ptr->name, max.name);

	pers_ptr=&max;

	if (pers_ptr->wohnsitz.plz == moritz.wohnsitz.plz) 
		printf("%s und %s wohnen in der selben Gegend von %s.\n",
               pers_ptr->name, moritz.name, moritz.wohnsitz.stadt);
               
    PAUSE
	return 0;
	
}


```
