#include <stdio.h>


int main(int argc, char **argv)
{
	printf("Exposem les dades de UOCBOOKINGS : \n");
	typedef enum { BUDGET, INN, RESORT, CONDO, LUXURY, COUNTRY} tipus;
	typedef enum { X, XX, XXX, XXXX, XXXXX} stars;
	typedef enum { A, B, C, D, E, F} score;
	typedef enum {FALSE, TRUE} boolean;
	// Part 1, declaracio de variables. Hauría de ser de la seguent manera, però ho comento
	// per tal de que l'exercici sigui funcional ja que als apunts d'aquest modul no ens ensenyen 
	// a declarar tipus "manualment" definits:
	
	/*  EXERCICI TEORIC : 
	int idHotel;
	tipus tipusHotel;
	stars numStars;
	score valoracio;
    int totalHabs;
	float preuHabs;
	boolean tePiscina;
	float percOcupacio;
	*/
	
	//EXERCICI PRÀCTIC (Perquè sigui funcional):
	int idHotel;
	char tipusHotel[10];
	//tipus tipusHotel;
	int numStars;
	char valoracio;
	int totalHabs;
	float preuHabs;
	char tePiscina;
	float percOcupacio;
	
	// Part 2, assignacio de vars per l'usuari
	printf("Digues idHotel:"); // idHotel = tipus int
	scanf("%d", &idHotel); // fem scanf("tipus dades", &adreçade[variable])
	printf("%d", idHotel); // imprimeix per pantalla la variable
	// repetim aixi amb els altres 
	getchar(); // fem servir el getchar(); per tal de que el nostre "enter" (ascii 13) no es faci
	           // mal amb el buffer que tenim. Com si "reinicialitzessim el buffer").
	
	
	printf("digues tipusHotel: \n"); // tipus Hotel = tipus string
	scanf("%s", &tipusHotel); // com és la primera PAC, hauria de ser "scanf(%tipus,&nomvar)", de moment posare string que es mes 'genèric'
	printf("%s", tipusHotel);
	getchar();
	
	printf("numero d'estrelles: \n"); // numStars = integer
    scanf("%d", &numStars); // igual que abans, posaré enter però hauria de 
	printf("%d", numStars);
	getchar();
	
	printf("valoracio:"); // valoracio = caràcter (char)
	scanf ("%c", &valoracio);
	printf("%c", valoracio);
	getchar();
	
	printf("total d'habitacions:"); // totalHabs = integer
	scanf ("%d", &totalHabs);
	printf("%d", totalHabs);
	getchar();
	
	printf ("preu habitacions"); // tipus float
	scanf("%f", &preuHabs); // tipus real/float == %f
	printf ("%2.2f", preuHabs); // FORMATEM EL OUTPUT A 2 DECIMALS!
	getchar();
	
	printf ("te piscina??");
	scanf("%c", &tePiscina); // %c == caràcter (Y/N);
	printf ("%c", tePiscina);
    getchar();
    
	printf ("percentatge d'ocupacio: "); // percOcupacio = real
	scanf("%f", &percOcupacio);
	printf ("%2.2f", percOcupacio); // formatem output a 2 decimals
	getchar();
	
	
	printf("---------RESUM----------");
	printf ("%d", idHotel);
	printf ("%s", tipusHotel);
	printf ("%d", numStars);
	printf ("%c", valoracio);
	printf ("%d", totalHabs);
	printf ("%2.2f", preuHabs);
	printf ("%c", tePiscina);
	printf ("%2.2f", percOcupacio);
	return 0;	
}