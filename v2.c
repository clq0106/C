#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

//typedefe die verschiedenen variablen für eine simplere Benutzung
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

//struct für Einträge in die linked list
typedef struct node
{
	int val;
	struct node * next;
}node_t;

//struct, um Daten des Benutzers zu speichern(History von Ein- und Ausgabe)
typedef struct user {
	char benutzername[20];
	f32 eingabe_ausgabe[20];
}User;

//struct, für Proton, Elektron, Neutron
struct molecular_particle {
	char name[10];
	f32 Masse;
	f32 Ladung;
};

//Konstanten für die nächste Funktion --> konstanten-Glossar (kommt noch)
struct Konstanten {
	char Konstanten_Name[20];
	f32 Konstanten_Wert;
};

//Wird in der Zukunft ein Glossar für wichtige Konstanten (Avogadro-Konstante z.B.)
int Konstanten_Glossar() {
	return 0;
}
//Gibt Werte für Proton, Neutrn, oder Elektron aus
int function(){

	printf("\n----------------------------------------------------------------------------------------------\n\n");
	char e;
	printf("Welches Atomteilchen würden Sie gerne aufrufen\n");
	printf("\nFür Proton: \tp\nFür Neutron: \tn\nFür Elektron: \te\nIhre Eingabe: \t");

	scanf(" %c", &e);
	printf("\n");

	//Eigenschaften der einzelnen Teilchen werden dem struct zugewiesen
	struct molecular_particle neutron = {"neutron", 1.0087, 0};
	struct molecular_particle proton = {"proton", 1.0073, 1.6};
	struct molecular_particle electron = {"electron",0.00055, 1.6 };

	//Switch-Verfahren um das gewählte Teilchen auszugeben + einen default Wert kreiiren + 'N' wie auch 'n' gelten lassen
	switch (e) {
		case 'N':
		case 'n':
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.4f\nDie Ladung in C: %.4f\n",neutron.name, neutron.Masse, neutron.Ladung);
		break;

		case 'P':
		case 'p':
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.4f\nDie Ladung in C: +%.4f*10^-19\n",proton.name, proton.Masse, proton.Ladung);
		break;

		case 'E':
		case 'e':
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.5f\nDie Ladung in C: -%.4f*10^-19\n",electron.name, electron.Masse, electron.Ladung);
		break;

		default:
		break;
	}
	return 0;
}

//Umwandlungsfunktion u <-> kg
f64 converter(f32* eingabe, f32* ausgabe) {
	
	u32 input_number, converted_number;
	u8 a;

	printf("\n----------------------------------------------------------------------------------------------\n");
	printf("Sie befinden sich in dem Converter, möchten Sie von u in kg umrechen (1), oder von kg in u (2)\n");
	scanf("%hhd", &a);

	//Gegen NULL checken
	assert(eingabe);
	assert(ausgabe);

	if (a == 1) {
		f32 zz;
		printf("\nGeben Sie die Masse in u ein: \t");
		scanf(" %f", &zz);
		
		f32 yy = zz*1.6605;
		printf("Ihre Eingegebene Zahl:\t%fu\nDie umgerechnete Zahl:\t%fe-27 kg\n",zz,yy );
//Nullstellen nachzählen, funktioniert noch nicht perfekt, maybe quadmath benutzen um gegen rundungen vorzugehen (Anweisung an mich selber)

	//Pointer um zwei Werte aus der Fuktion zu returnen
	*eingabe = zz;
	*ausgabe = yy;
	}
	if (a == 2) {
		f32 zz;
		i8 hoch;

		printf("\nGeben Sie die Masse in kg ein: \t");
		scanf(" %f", &zz);
		printf("e");
		scanf("%d", &hoch);

		f32 yy = zz/1.6605;
		printf("Ihre eingegebene Zahl:\t%fu\nDie umgerechnete Zahl:\t%f\n",zz,yy);

			//Pointer um zwei Werte aus der Fuktion zu returnen
	*eingabe = zz;
	*ausgabe = yy;
	}
	return converted_number;
}

void history() {
	struct user Benutzer1;
	f32 eingabe, ausgabe;
	char qq;

	Benutzer1 = (User) {.benutzername = *name_benutzer, .eingabe_ausgabe[0] = eingabe, .eingabe_ausgabe[1] = ausgabe};
	 
	//history von Ein- und Ausgabe kann eingezeigt werden (Daten aus dem Converter
	printf("Um History anzuzeigen, drücke 'h', um das Programm zu schließen drücke eine beliebige Taste\nIhre Eingabe:\t");
	scanf(" %c",&qq);
	if (qq == 'h') {
		printf("\n\nHistory von %s: \nLetzte Eingabe:\t%f\nLetzte Ausgabe:\t%f\n",name_benutzer, Benutzer1.eingabe_ausgabe[0], Benutzer1.eingabe_ausgabe[1]);
	}

}

int functionsaufrufer(f32 *eingabe, f32 *ausgabe){

	char pruefung;
	u8 input;
	f32 eingabe_test = *eingabe, ausgabe_test = *ausgabe;

	do
	{
	printf("Welche Funktion würden Sie gerne aufrufen?\n\n1 = Proton/Elektron/Neutron\n\n2 = Converter: Elementareinheit u <-> kg\n\n\nIhre Eingabe: \t");
	scanf("%hhd", &input);

	switch (input) {
		case 1: function();
		break;

		case 2: converter(&eingabe_test, &ausgabe_test);
		break;
	}

	printf("Funktion Beenden = 'q'\nWeiter nutzen = beliebiger Input\n\n");
	scanf(" %c",&pruefung);
	} while (pruefung != 'q');

	*eingabe = eingabe_test;
	*ausgabe = ausgabe_test;
	
	return 0;
}

int main() {
	char name_benutzer[20];
	f32 eingabe, ausgabe;


	printf("Bitte geben Sie Ihren Namen ein, damit Ihre Daten gespeichert werden: \nIhre Eingabe: \t");
	if (scanf("%s",name_benutzer) != 1) {
		printf("Input error\n");
		return 1;
	}
	printf("\n\n\t\tHallo %s\n\n\n\n\n",name_benutzer);

	functionsaufrufer(&eingabe, &ausgabe);

	return 0;
}
