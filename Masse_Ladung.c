#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

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

typedef struct user {
	char benutzername[20];
	f32 eingabe_ausgabe[20];
}User;

struct molecular_particle {
	char name[10];
	f32 Masse;
	f32 Ladung;
};

struct Konstanten {
	char Konstanten_Name[20];
	f32 Konstanten_Wert;
};

int Konstanten_Glossar() {
	return 0;
}

int function() {

	printf("\n----------------------------------------------------------------------------------------------\n\n");
	char e;
	printf("Welches Atomteilchen würden Sie gerne aufrufen\n");
	printf("\nFür Proton: \tp\nFür Neutron: \tn\nFür Elektron: \te\nIhre Eingabe: \t");

	scanf(" %c", &e);
	printf("\n");

	struct molecular_particle neutron = {"neutron", 1.0087, 0};
	struct molecular_particle proton = {"proton", 1.0073, 1.6};
	struct molecular_particle electron = {"electron",0.00055, 1.6 };

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

f64 converter(f32* eingabe, f32* ausgabe) {
	
	u32 input_number, converted_number;
	u8 a;

	printf("\n----------------------------------------------------------------------------------------------\n");
	printf("Sie befinden sich in dem Converter, möchten Sie von u in kg umrechen (1), oder von kg in u (2)\n");
	scanf("%hhd", &a);

	assert(eingabe);
	assert(ausgabe);

	if (a == 1) {
		f32 zz;
		printf("\nGeben Sie die Masse in u ein: \t");
		scanf(" %f", &zz);
		
		f32 yy = zz*1.6605;
		printf("Ihre Eingegebene Zahl:\t%fu\nDie umgerechnete Zahl:\t%fe-27 kg\n",zz,yy );
//Nullstellen nachzählen
	*eingabe = zz;
	*ausgabe = yy;
	}

	if (a == 2) {
		f32 zz;
		printf("\nGeben Sie die Masse in kg ein: \t");
		scanf(" %f", &zz);

		f32 yy = zz/1.6605;
		printf("Ihre eingegebene Zahl:\t%fu\nDie umgerechnete Zahl:\t%f\n",zz,yy);
	}
	return converted_number;
}

int main() {
	
	char qq, name_benutzer[20];
	u8 input;
	f32 eingabe, ausgabe;
	User Benutzer1;

	printf("Bitte geben Sie Ihren Namen ein, damit Ihre Daten gespeichert werden: \nIhre Eingabe: \t");
	if (scanf("%s",name_benutzer) != 1) {
		printf("Input error\n");
		return 1;
	}
	printf("\n\n\t\tHallo %s\n\n\n\n\n",name_benutzer);

	printf("Welche Funktion würden Sie gerne aufrufen?\n\n1 = Proton/Elektron/Neutron\n\n2 = Converter: Elementareinheit u <-> kg\n\n\nIhre Eingabe: \t");
	scanf("%hhd", &input);

	switch (input) {
		case 1: function();
		break;

		case 2: converter(&eingabe, &ausgabe);
		break;
	}
	Benutzer1 = (User) {.benutzername = *name_benutzer, .eingabe_ausgabe[0] = eingabe, .eingabe_ausgabe[1] = ausgabe};
	
	scanf(" %c",&qq);
	if (qq == 'h') {
		printf("History von %s: \nLetzte Eingabe:\t%f\nLetzte Ausgabe:\t%f\n",name_benutzer, Benutzer1.eingabe_ausgabe[0], Benutzer1.eingabe_ausgabe[1]);
	}
	return 0;
}
